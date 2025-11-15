// snake.cpp
// Cross-platform console Snake game (Windows + Unix-like)
// Compile (Linux/macOS): g++ snake.cpp -o snake -std=c++11
// Compile (Windows, MinGW): g++ snake.cpp -o snake.exe -std=c++11

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <thread>
#include <chrono>

#ifdef _WIN32
  #include <conio.h>
  #include <windows.h>
#else
  #include <termios.h>
  #include <unistd.h>
  #include <sys/select.h>
#endif

using namespace std;

int width = 40;
int height = 20;
bool gameOver = false;
int score = 0;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir = STOP;

pair<int,int> food;
deque<pair<int,int>> snake; // front is head

// ---------- Cross-platform helpers ----------
#ifdef _WIN32
void clearScreen() { system("cls"); }
void sleep_ms(int ms) { Sleep(ms); }
int kbhit_nonblocking() { return _kbhit(); }
char getch_nonblocking() { return _getch(); }
#else
// POSIX (Linux / macOS)
static struct termios orig_termios;
void reset_terminal_mode() {
    tcsetattr(0, TCSANOW, &orig_termios);
}
void set_conio_terminal_mode() {
    struct termios new_termios;
    tcgetattr(0, &orig_termios);
    new_termios = orig_termios;
    // disable canonical mode, echo
    new_termios.c_lflag &= ~(ICANON | ECHO);
    // minimum of number input read.
    new_termios.c_cc[VMIN] = 0;
    // timeout
    new_termios.c_cc[VTIME] = 0;
    tcsetattr(0, TCSANOW, &new_termios);
    atexit(reset_terminal_mode);
}
int kbhit_nonblocking() {
    struct timeval tv = {0, 0};
    fd_set read_fd;
    FD_ZERO(&read_fd);
    FD_SET(0, &read_fd);
    if (select(1, &read_fd, NULL, NULL, &tv) == -1) return 0;
    return FD_ISSET(0, &read_fd);
}
char getch_nonblocking() {
    char c = 0;
    if (read(0, &c, 1) < 0) return 0;
    return c;
}
void clearScreen() { cout << "\033[2J\033[1;1H"; } // ANSI clear
void sleep_ms(int ms) { std::this_thread::sleep_for(std::chrono::milliseconds(ms)); }
#endif
// ---------- End helpers ----------

void placeFood() {
    while (true) {
        int fx = rand() % width;
        int fy = rand() % height;
        bool onSnake = false;
        for (auto &s : snake) if (s.first == fx && s.second == fy) { onSnake = true; break; }
        if (!onSnake) { food = {fx, fy}; break; }
    }
}

void initGame() {
    srand((unsigned)time(nullptr));
    snake.clear();
    // start snake in center
    int sx = width / 2;
    int sy = height / 2;
    snake.push_back({sx, sy});
    snake.push_back({sx-1, sy});
    snake.push_back({sx-2, sy});
    dir = RIGHT;
    score = 0;
    placeFood();
    gameOver = false;
#ifdef __unix__
    set_conio_terminal_mode();
#endif
}

void draw() {
    clearScreen();
    // top border
    for (int i = 0; i < width + 2; ++i) cout << '#';
    cout << '\n';

    for (int y = 0; y < height; ++y) {
        cout << '#';
        for (int x = 0; x < width; ++x) {
            bool printed = false;
            if (x == food.first && y == food.second) {
                cout << '@'; // food
                printed = true;
            } else {
                for (size_t i = 0; i < snake.size(); ++i) {
                    if (snake[i].first == x && snake[i].second == y) {
                        if (i == 0) cout << 'O'; // head
                        else cout << 'o'; // body
                        printed = true;
                        break;
                    }
                }
            }
            if (!printed) cout << ' ';
        }
        cout << "#\n";
    }

    for (int i = 0; i < width + 2; ++i) cout << '#';
    cout << "\nScore: " << score << "\n";
    cout << "Controls: W A S D or arrow keys. Press 'q' to quit.\n";
}

void input() {
    if (!kbhit_nonblocking()) return;
    char c = getch_nonblocking();
    if (!c) return;

    // On many terminals arrow keys send escape sequences.
    if (c == '\033') { // potential arrow key (Unix)
        // try to read two more chars quickly
        if (kbhit_nonblocking()) {
            char c2 = getch_nonblocking();
            if (kbhit_nonblocking()) {
                char c3 = getch_nonblocking();
                if (c2 == '[') {
                    if (c3 == 'A') dir = UP;
                    else if (c3 == 'B') dir = DOWN;
                    else if (c3 == 'C') dir = RIGHT;
                    else if (c3 == 'D') dir = LEFT;
                }
            }
        }
        return;
    }

    // Windows arrow keys return 0 or 224 then code via _getch(); handle common keys
#ifdef _WIN32
    if (c == 0 || c == (char)224) {
        if (kbhit_nonblocking()) {
            char code = getch_nonblocking();
            if (code == 72) dir = UP;      // up
            else if (code == 80) dir = DOWN; // down
            else if (code == 77) dir = RIGHT; // right
            else if (code == 75) dir = LEFT;  // left
        }
        return;
    }
#endif

    // WASD / wsad / q
    if (c == 'w' || c == 'W') { if (dir != DOWN) dir = UP; }
    else if (c == 's' || c == 'S') { if (dir != UP) dir = DOWN; }
    else if (c == 'a' || c == 'A') { if (dir != RIGHT) dir = LEFT; }
    else if (c == 'd' || c == 'D') { if (dir != LEFT) dir = RIGHT; }
    else if (c == 'q' || c == 'Q') { gameOver = true; }
}

void logic() {
    // compute new head
    auto head = snake.front();
    int hx = head.first;
    int hy = head.second;
    switch (dir) {
        case LEFT:  hx -= 1; break;
        case RIGHT: hx += 1; break;
        case UP:    hy -= 1; break;
        case DOWN:  hy += 1; break;
        default: break;
    }

    // wrap-around or wall collision? We'll use wall collision -> game over
    if (hx < 0 || hx >= width || hy < 0 || hy >= height) {
        gameOver = true;
        return;
    }

    // self collision
    for (auto &s : snake) {
        if (s.first == hx && s.second == hy) { gameOver = true; return; }
    }

    // move snake
    snake.push_front({hx, hy});

    // check food
    if (hx == food.first && hy == food.second) {
        score += 10;
        placeFood();
    } else {
        // remove tail
        snake.pop_back();
    }
}

int main() {
    initGame();
    const int baseDelayMs = 120; // base speed
    while (!gameOver) {
        draw();
        input();
        logic();
        // increase speed as score grows (but keep min delay reasonable)
        int delay = baseDelayMs - min(80, score / 5);
        if (delay < 40) delay = 40;
        sleep_ms(delay);
    }

#ifdef __unix__
    reset_terminal_mode();
#endif

    clearScreen();
    cout << "Game Over!\n";
    cout << "Final Score: " << score << "\n";
    cout << "Play again? (y/n): ";
    char c; cin >> c;
    if (c == 'y' || c == 'Y') {
        // restart by re-executing main loop: naive simple approach
        // (in real program you'd factor to allow restart cleanly). We'll re-call main.
        // To avoid recursion issues, we'll exec a new process is ideal; simple hack: rerun.
        // For simplicity here, just restart variables and loop.
        initGame();
        while (!gameOver) {
            draw();
            input();
            logic();
            int delay = baseDelayMs - min(80, score / 5);
            if (delay < 40) delay = 40;
            sleep_ms(delay);
        }
        cout << "Final Score: " << score << "\n";
    }

    cout << "Thanks for playing!\n";
    return 0;
}

# Copilot instructions — classroom C programs

This repository is a collection of small, standalone C (and a few C++) practice programs. The guidance below is intentionally focused and actionable so an AI coding agent can be productive immediately.

**Big picture**
- Most programs are single-file console apps (e.g., `string.c`, `main.c`, `game.c`, `pattern.c`). Treat each `.c` as an independent executable unless a `CMakeLists.txt` target ties files together.
- There is a `CMakeLists.txt` and an IDE-generated `cmake-build-debug/` folder (CLion/VS Code). The build folder is generated; avoid editing files inside it.

**Key files / places to check**
- `CMakeLists.txt` — root CMake file, but many sources compile standalone.
- `string.c`, `main.c`, `game.c`, `game1.cpp` — representative source examples showing input via `scanf` and console I/O patterns.
- `cmake-build-debug/` — generated; do not modify.

**Build & run (practical examples)**
- Compile a single file (PowerShell / MinGW or GCC on Windows):
  - `gcc string.c -o string.exe -Wall -Wextra`
  - Run: `.\\string.exe` (PowerShell)
- Use CMake if you need a project build: from repo root
  - `cmake -S . -B cmake-build-debug`
  - `cmake --build cmake-build-debug --config Debug`
  - Note: the exact generator depends on user environment (MinGW, MSVC, Ninja). If uncertain, prefer per-file `gcc` commands.

**Repository patterns and conventions**
- Files are flat in the repo root; filenames include spaces and inconsistent casing. Do not rename files without explicit user approval.
- Input patterns: many programs use `scanf` (often `scanf("%s", str)`); expect console-driven input and short runtime interactions.
- Minimal/no test harnesses or automated CI. Aim for small, local edits and include example compile/run commands when making changes.

**How to safely modify code here**
- Fixing compile errors: produce minimal, self-contained patches (single-file changes) and include a short rationale comment. Example: `string.c` currently has a malformed include (`#include <>`) — replace with the correct headers or remove unused includes.
- Avoid global refactors: no automatic renaming of files, no addition of license headers, and no reorganization of the entire repo unless the user asks.
- Preserve program I/O behavior unless the change is explicitly to improve safety (e.g., replace `scanf("%s", str)` with `scanf("%99s", str)` and explain the change).

**Debugging & quality checks**
- Compile with `-Wall -Wextra` to spot common issues; for stricter checks use `-Werror` when the user requests it.
- For runtime debugging prefer reproducing input locally and using `gdb` or the VS Code C/C++ debugger.

**When to create or update shared code**
- There is no existing shared `include/` or `src/` pattern. Propose shared helpers only after asking the user; include updates to `CMakeLists.txt` if you add shared files.

**Examples of actionable edits**
- Fix a broken include in `string.c` (replace `#include <>` with `#include <stdio.h>` / `#include <string.h>` as needed) and add a safe `scanf` width specifier.
- Add `-Wall -Wextra` compile examples in top-of-file comments for files you modify.

If anything in the above is unclear or you want the agent to follow stricter rules (e.g., always add tests, always run `cmake`), tell me which rules to enforce and I will update this file.

#include <stdio.h>
struct hello {
    int a;
    float b;
    char c;
} ;
int main(void){

    struct hello j1;
    j1.a = 10;
    j1.b = 20.5;
    j1.c = 'z';

    printf("a: %d\n", j1.a);
    printf("b: %.2f\n", j1.b);
}
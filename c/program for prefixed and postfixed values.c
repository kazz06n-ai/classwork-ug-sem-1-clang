//
// Created by IIISI on 9/16/2025.
//
#include <stdio.h>
int main () {
    int x=10;
    int y=x++;
    printf("The value of x is %d\n", x);
    int z=++x;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
    return 0;

}
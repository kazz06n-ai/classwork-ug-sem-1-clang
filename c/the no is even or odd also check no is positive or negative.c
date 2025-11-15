//
// Created by IIISI on 9/23/2025.
//
#include <stdio.h>
int main() {
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    if (no%2==0)
        printf("The number is even \n");
    else
        printf("The number is odd \n");
    if (no<0)
        printf("The number is negative  \n");
    else
        printf("The number is positive \n");
    return 0;
}
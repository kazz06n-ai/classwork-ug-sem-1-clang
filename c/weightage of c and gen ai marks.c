//
// Created by IIISI on 9/16/2025.
//
#include <stdio.h>
int main()
{
    printf("Enter marks for c (out of 100): ");
    int marks;
    scanf("%f", &marks);
    printf("Enter marks for gen ai (out of 100): ");
    float marks2;
    scanf("%f", &marks2);
    int c=marks*.3+marks2*.7;
    printf("Final marks %f",c);
    return 0;



}
//
// Created by IIISI on 11/8/2025.
/*
#include <stdio.h>
int main() {
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("the swapped value of a is %d and swapped value of b is %d",a,b);
    return 0;
}*/
#include <stdio.h>
int main() {
    int a,b;
    printf("enter the  numbers to swap:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped value of a %d and b %d",a,b);
    return 0;
}
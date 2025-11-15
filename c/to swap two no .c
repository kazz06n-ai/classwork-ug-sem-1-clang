//
// Created by IIISI on 10/14/2025.
//
#include  <stdio.h>
void swap (int x, int y) {
    int temp;
    printf("Before swapping x %d and y %d \n",x,y);
    temp = x;
    x=y;
    y=temp;
    printf("After swapping x %d and y %d",x,y);
}
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;}
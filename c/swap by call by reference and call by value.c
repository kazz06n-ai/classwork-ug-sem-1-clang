//
// Created by IIISI on 10/29/2025.
//call by reference
/*
#include <stdio.h>
void swap(int *x, int *y) {
    int temp=*x;
    printf("Before swaping x: %d and y: %d  \n",*x,*y);
    *x=*y;
    *y=temp;
    printf("After swaping x: %d and y: %d  \n",*x,*y);
}
int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Before swaping a: %d and b: %d \n",a,b);
    swap(&a,&b);
    printf("After swaping a: %d and b: %d \n",a,b);
    return 0;
}*/
//call by value
#include <stdio.h>
void swapn(int x, int y) {
    int temp=x;
    printf("Before swaping x: %d and y: %d  \n",x,y);
    x=y;
    y=temp;
    printf("After swaping x: %d and y: %d  \n",x,y);
}
int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Before swaping a: %d and b: %d \n",a,b);
    swapn(a,b);
    printf("After swaping a: %d and b: %d \n",a,b);
    return 0;
}
//
// Created by IIISI on 11/8/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n!=0) {
        n=n*(-1);
        printf("%d",n);
    }
    else {
        printf("no is 0");
    }


    return 0;


}
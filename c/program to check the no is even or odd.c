//
// Created by IIISI on 9/16/2025.
//
#include <stdio.h>
int main() {
    printf("Enter the no to check=");
    int no;
    scanf("%d", &no);
    if (no % 2 == 0) {
        printf("inside the if block");
        printf("%d the no is even",no);
        no++;
    }
    printf("the value of orignal no %d",no);
    return 0;
}
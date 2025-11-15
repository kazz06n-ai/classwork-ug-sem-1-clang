//
// Created by IIISI on 9/16/2025.
//
#include <stdio.h>
int main() {
    int no;
  //the unsigned int will make this code go wrong because the value of unsigned int is from 1 to infinity
    printf("Enter your no:");
    scanf("%d",&no);
    if(no>0)
        printf("%d is a positive no",no);
    else if (no<0)
        printf("%d is a negative no",no);
    else
        printf("the no %d is  zero",no);
    return 0;
}
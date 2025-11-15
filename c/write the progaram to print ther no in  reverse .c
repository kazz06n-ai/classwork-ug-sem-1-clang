//
// Created by IIISI on 10/9/2025.
//
#include <stdio.h>
int main(){
    int no,rem,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&no);
    while(no>0) {
        rem=no%10;
        reverse=reverse*10+rem;
        no=no/10;
    }
    printf("The reverse of the number is %d",reverse);
    return 0;
}


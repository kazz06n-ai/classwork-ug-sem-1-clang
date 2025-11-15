//
// Created by IIISI on 10/7/2025.
//
#include <stdio.h>
int main() {
    int no,e,u,sum=0,r=0;
    printf("enter a number:");
    scanf("%d",&no);
    u=no;
    while(u!=0) {
        u=u /10;
        r++;
        ;
    }
    u=no;
    while(u!=0) {
        u=u/10;
        sum=sum+u*r;
    }
    if(sum==no) {
        printf("%d is an armstrong number",no);
    }
    else {
        printf("%d is not an armstrong number",no);
    }
    return 0;
}
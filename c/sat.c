//
// Created by IIISI on 11/1/2025#
#include <stdio.h>
int main() {
    int n,nn,d,s=0,nnn;
    printf("enter number of terms you want to enter: ");
    scanf("%d",&n);
    while (n>9){

        while(n>0) {
            d=n%10;
            s+=d*d;
            n=n/10;
        }
        n=s;
    }
       printf("this is  %d",n);
    return 0;
}
//
// Created by IIISI on 10/1/2025.
//
#include <stdio.h>
int main() {
    int n,k,sum=0;
    printf("enter the number till where you want to add=");
    scanf("%d",&k);
    while(n!=k) {
        sum=sum+n;
        n=n+1;
    }
    printf("sum=%d",sum);
    return 0;
}
//
// Created by IIISI on 11/1/2025.
//
#include <stdio.h>
int main (){
    int n,c=0;
    printf("Enter the number you want to enter: ");
    scanf("%d",&n);
    for (int i=2;i<n/2;i++) {

        if(n%i==0) {
            c++;
        }
    }
    if(c>0) {
        printf("%d is not  a prime number",n);
    }
    else {
        printf("%d is a prime number",n);
    }
    return 0;
}
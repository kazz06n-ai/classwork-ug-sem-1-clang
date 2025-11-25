
// Created by IIISI on 10/1/2025.

#include <stdio.h>


int main() {

    int n,j,k;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n < 10) {

        printf("Number must be two digit");
        return 0;
    }
    while(n != 0) {

        j=n%10;
        k=k*10+j;
        n=n/10;

        printf("%d",n);

    }
    printf("%d",k);

    if (n==k) printf("%d is a palindrome",k);
    else printf("%d is not a palindrome",k);

    return 0;

}


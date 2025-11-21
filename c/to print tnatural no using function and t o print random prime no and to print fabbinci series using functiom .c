//
// Created by IIISI on 10/15/2025.
//
#include <stdio.h>

void natural_no(int n) {
    int c=1;
    while(c!=n) {
        printf("%d",c);
        c++;
    }
}
void fibonacci(int n) {
    int a=0,b=1,tem=1;
    for (int i=1; i<=n; i++) {
        printf("%d",a);
        a=b;
        b=tem;
        tem=a+b;
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return 0;
}
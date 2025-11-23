#include <stdio.h>

int factorial(int n){

    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
    
}

int main(void){

    int n = 5;
    if(n <= 0){
        printf("!! not valid !!");
        return 0;
    }
    printf("%d! = %d",n,factorial(n));
}
#include <stdio.h>
#include <math.h>

int reverse(int n){


    if(n < 10 ){

        return n;
    }

    return ((n%10)*pow(10,(int)log10(n))) + reverse(n / 10);
}

int main(void){

    int n = 12345;
    printf("%d",reverse(n));


}
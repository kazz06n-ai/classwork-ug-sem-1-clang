
#include <stdio.h>
int main() {
    int n=0,k,m=1;
    printf("enter the number till where you want the factorial of your no=");
    scanf("%d",&k);
    if (k<0) {
        printf("error");
        return -6;
    }
    while(n!=k) {
        n++;
        m=m*n;
    }
    printf("factorial=%d", m);
    return 0;
}
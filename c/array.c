#include <stdio.h>
#define maxsize 100
int main() {
    int size;
    int a[maxsize];
    printf("enter the value of element you want to insert ");
    scanf("%d",&size);
    printf("enter the %d element in array",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&a[i]);

    }
    for (int i=0;i<size;i++) {
        printf("%d",a[i]);
    }

    return 0;
}

#include <stdio.h>
int main() {
    float no;
    printf("Enter a number: ");
    scanf("%f",&no);
    int num=(int)no;
    printf("the no in float = %12.2f   \n",no );
    printf("the no in int = %d",num);
    return 0;
}
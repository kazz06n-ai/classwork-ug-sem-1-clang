#include <stdio.h>



int main(){
    int c=0;
    char str[100];
    printf("enter the characters");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++){
        c++;
    }
    printf("length of string is %d",c);

    
    return 0;
}

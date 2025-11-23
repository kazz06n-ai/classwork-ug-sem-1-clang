#include <stdio.h>
// #include <string.h>
int main(){
    int size;
    // printf("enter the size of string");
    // scanf("%d",&size);
    char str[100];
     printf("enter the characters");
    fgets(str, sizeof(str), stdin);
    // scanf("%s",str);
    // for(int i=0;i<size;i++){
    //     scanf("%c",&str[i]);

    // }

    puts(str);

    
    return 0;
}

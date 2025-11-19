#include <stdio.h>
#include <string.h>
char lowercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch + 32;
    }
    else{
        return ch;
    }
}
int main(){
    char str[100];
    printf("enter the characters");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = lowercase(str[i]);
    }
    puts(str);

    
    return 0;
}


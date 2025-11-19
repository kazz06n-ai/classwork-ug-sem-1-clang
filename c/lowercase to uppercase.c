#include <stdio.h>
#include <string.h>
char uppercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch - 32;
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
        str[i] = uppercase(str[i]);
    }
    puts(str);

    
    return 0;
}


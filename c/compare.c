#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool compaiar(char* arr1,char* arr2){

    int size1 = strlen(arr1);
    int size2 = strlen(arr2);

    if(size1 != size2){
        return 0;
    }

    for(int i = 0; i < size1; ++i){
        if(arr1[i] != arr2[i]){
            printf("False: they are diffrent");
            return 0;   
        }
    }
    return 1;
    
}



int main(void){

    printf("Enter a string: ");
    char arr1[100];
    scanf("%s",arr1);

    printf("Enter Secound string: ");
    char arr2[100];
    scanf("%s",arr2);

    
    printf("%s",compaiar(arr1,arr2)?"True: they are same":"False: they are diffrent");
    

    return 0;


}
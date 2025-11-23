#include <stdio.h>
#include <string.h>

void merge_print(char* arr1,char* arr2){

    printf("%s%s",arr1,arr2);
}

int main(void){

    printf("Enter a string: ");
    char arr1[100];
    scanf("%s",arr1);

    printf("Enter Secound string: ");
    char arr2[100];
    scanf("%s",arr2);

    merge_print(arr1,arr2);


}
#include <stdio.h>


int main(void){

    int array[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            array[i][j] = i*3+j+1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum += array[i][2-i];
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n%d",sum);

}
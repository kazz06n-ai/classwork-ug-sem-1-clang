#include <stdio.h>

int main(void){

    int array1[3][3];
    int array2[3][3];
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            array1[i][j] = i*3+j+1;
            array2[i][j] = i*3+j+1;
        }
    }




    for(int i = 0;i < 3;++i){
        for(int j = 0; j < 3;++j){
            int sum = 0;
            for(int k = 0; k < 3;++k){
                sum += array1[i][k] * array2[k][j];
            }
            result[i][j] = sum;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
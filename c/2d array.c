#include <stdio.h>
int main (){
    int i,j,row,col;
    printf("enter the no of rows");
    scanf("%d",&row);
    printf("enter the no of col");
    scanf("%d",&col);
    int mat[row][col];
    printf("enter array elements");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d",mat[i][j]);
    
        }
        printf("\n");
    }
    return 0;

}
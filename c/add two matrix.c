#include <stdio.h>
int main (){
    int i,j,row,col,con;
    printf("enter the no of rows");
    scanf("%d",&row);
    printf("enter the no of col");
    scanf("%d",&col);
    int mat[row][col],mat1[row][col];
    printf("enter array elements");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
        printf("enter  the 2 array elements");
        for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
        for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            int s=mat[i][j]+mat1[i][j];
            printf("%d",s);
    
        }
        printf("\n");
    }
    return 0;

}

#include <stdio.h>
#include <stdlib.h>


void fillMatrix(int **matrix, int size){
    int position=0;
    int sizecurr=size;
    int row=1;
    while(size!=0){
        int* M = (int*)malloc(sizecurr*sizeof(int));
        for(int i=0; i<sizecurr;i++){
            printf("Enter %d element %d row \n",i+1, row);
            scanf("%d",&M[i]);
        }
        row=row+1;
        matrix[position]=M;
        position=position+1;
        size=size-1;
    }
}

void printMatrix(int **matrix, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int** matrix, int size){
    for(int i=0;i<size;i++){
        free(matrix[i]);
    }
    free(matrix);
}

void searchMatrix(int** matrix, int size){
    int startrow,startcolumn,endrow,endcolumn;
    for(int i=0;i<size;i++){
        for(int j=0; j<size;j++){
            if (matrix[i][j]==0){
                startcolumn=j;
                startrow=i;
            }
            if (matrix[i][j]==-2){
                endcolumn=j;
                endrow=i;
            }
        }
    }
    while(1){
        if (startcolumn+1<size){
            matrix[startrow][startcolumn+1]=matrix[startrow][startcolumn]+matrix[startrow][startcolumn+1];
        }
    }

}

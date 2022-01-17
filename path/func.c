#include <stdio.h>
#include <stdlib.h>


void fillMatrix(int **matrix, int size){
    int position=0;
    int sizecurr=size;
    while(size!=0){
        int* M = (int*)malloc(sizecurr*sizeof(int));
        for(int i=0; i<sizecurr;i++){
            printf("Enter %d element \n",i+1);
            scanf("%d",&M[i]);
        }
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

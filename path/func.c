#include <stdio.h>
#include <stdlib.h>


void fillMatrix(int **matrix, int n){
    int k=0;
    int size=n;
    while(n!=0){
        int* M = (int*)malloc(n*sizeof(int));
        for(int i=0; i<size;i++){
            scanf("%d",&M[i]);
        }
        matrix[k]=M;
        k=k+1;
        n=n-1;
    }
}

void printMatrix(int **matrix, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int** matrix, int n){
    for(int i=0;i<n;i++){
        free(matrix[i]);
    }
    free(matrix);
}

//
// Created by 1 on 05.01.2022.
//


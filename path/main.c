#include <stdio.h>
#include <stdlib.h>
void fillMatrix(int**, int);
void printMatrix(int**, int);
void freeMatrix(int**, int);
void searchMatrix(int**, int);
void fillArrays(int** marked, int** distance ,int size,int startrow, int startcolumn);
int main() {
    int size;

    //scanning the size
    printf("Please, enter size of the matrix\n");
    scanf("%d",&size);
    //

    //filling matrix
    int** Matrix = (int**)malloc(size*sizeof(int));
    fillMatrix(Matrix, size);

    printMatrix(Matrix,size);
    searchMatrix(Matrix,size);

    freeMatrix(Matrix,size);
    return 0;
}

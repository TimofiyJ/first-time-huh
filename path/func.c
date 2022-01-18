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
            if (matrix[i][j]==-1){
                endcolumn=j;
                endrow=i;
            }
        }
    }
    int* marked=(int)malloc(size*size*sizeof(int));
    int* distance=(int)malloc(size*size*sizeof(int));
    for(int i=0;i<size*size;i++){
        if (startrow*size+startcolumn==i){
            distance[i]=1;
            marked[i]=1;
        }
        else{
            distance[i]=0;
            marked[i]=0;
        }
    }
    while(1){
        int currpos=startrow*size+startcolumn;
        printf("%d currpos\n",currpos);
        printf("%d startrow\n",startrow);
        printf("%d startcolumn\n",startcolumn);
        printf("%d numb\n",matrix[startrow][startcolumn]);
        printf("%d numb2\n",distance[currpos-size]);

        if (startcolumn+1<size){
            if (distance[currpos+1]>distance[currpos] + matrix[startrow][startcolumn + 1] || distance[currpos+1]==0) {
                distance[currpos + 1] = distance[currpos] + matrix[startrow][startcolumn + 1];
                printf("%d !\n", distance[currpos + 1]);
            }
        }
        if (startcolumn-1>=0){
            if (distance[currpos-1]>distance[currpos]+matrix[startrow][startcolumn-1] || distance[currpos-1]==0){
                distance[currpos-1]=distance[currpos]+matrix[startrow][startcolumn-1];
                printf("%d !!\n", distance[currpos-1]);
            }
        }
        if (startrow-1>=0){
            if(distance[currpos-size] > distance[currpos] + matrix[startrow - 1][startcolumn] || distance[currpos-size]==0) {
                distance[currpos - size] = distance[currpos] + matrix[startrow - 1][startcolumn];
                printf("%d !!!\n", distance[currpos - size]);
            }
        }
        if (startrow+1<size){
            if(distance[currpos+size] > distance[currpos] + matrix[startrow + 1][startcolumn] || distance[currpos+size]==0) {
                distance[currpos + size] = distance[currpos] + matrix[startrow + 1][startcolumn];
                printf("%d !!!!\n", distance[currpos + size]);
            }
        }
        printf("\n distance:");
        for(int i=0;i<size*size;i++) {
            printf("%d ", distance[i]);
        }
        marked[currpos]=1;
        printf("\n marked:");
        for(int i=0;i<size*size;i++) {
            printf("%d ", marked[i]);
        }

        int min=999999;
        int posmin=0;
        for(int i=0;i<size*size;i++){
            if(distance[i]!=0 && distance[i]<=min && marked[i]!=1){
                min=distance[i];
                posmin=i;
            }
        }
        printf("\nposmin: %d\n",posmin);
        startrow=posmin/size;
        startcolumn=posmin%size;
        int sum=size*size;
        int sum2=0;
        for(int i=0;i<size*size;i++){
            sum2=sum2+marked[i];
        }
        if(sum2==sum){
            break;
        }

    }
    printf("%d",distance[endrow*size+endcolumn]);

}

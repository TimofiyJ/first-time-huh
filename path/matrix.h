#pragma once
#include "functions.h"



class CMatrix {
public:
    int size;

    void getSize(int);

    void fillMatrix(CPoint** matrix);

    void printMatrix(CPoint** );

    void freeMatrix(CPoint** );

    void fillArrays(int* , int* , int , int );

    void searchWalls(CPoint** , int* , int* );

  


};

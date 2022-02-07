#include <iostream>
#include <string>
#include <stdlib.h>
#include "matrix.h"
#include "functions.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int size;

void CMatrix::getSize(int sizeM) {
    size = sizeM;
}


    void CMatrix::fillMatrix(CPoint** matrix) {

        int position = 0;
        int sizecurr = size;
        int row = 1;


        while (size != 0) {
            CPoint* Array = new CPoint[sizecurr];
            for (int i = 0; i < sizecurr; i++) {
                CPoint point;
                Array[i] =  point;
                Array[i].getNumber();

            }

            row = row + 1;
            matrix[position] = Array;
            position = position + 1;
            size = size - 1;
        }
    }

    void CMatrix::printMatrix(CPoint** matrix) {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j].number << " ";
            }

            cout << "\n" << endl;
        }
    }

    void CMatrix::freeMatrix(CPoint** matrix) {

        for (int i = 0; i < size; i++) {
            delete [] matrix[i];
        }

        delete [] matrix;
    }

    void CMatrix::fillArrays(int* marked, int* distance, int startrow, int startcolumn) {

        for (int i = 0; i < size * size; i++) {

            if (startrow * size + startcolumn == i) {
                distance[i] = 1;
                marked[i] = 1;

            }

            else {
                distance[i] = 0;
                marked[i] = 0;

            }
        }
    }

    void CMatrix::searchWalls(CPoint** matrix, int* distance, int* marked) {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                if (matrix[i][j].number == -2) {
                    marked[i * size + j] = 1;
                    distance[i * size + j] = -1;

                }
            }
        }
    }


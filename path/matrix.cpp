#include <iostream>
#include <string>
#include <stdlib.h>
#include "my_matrix.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
int size = 0;

void Cmatrix::getSize(int sizeM) {
    size = sizeM;
}

    void Cmatrix::fillMatrix(int** matrix) {

        int position = 0;
        int sizecurr = size;
        int row = 1;


        while (size != 0) {
            int* Array = new int[sizecurr];


            for (int i = 0; i < sizecurr; i++) {

                cout << "Enter " << i + 1 << " element " << row << " row \n" << endl;
                cin >> Array[i];
            }

            row = row + 1;
            matrix[position] = Array;
            position = position + 1;
            size = size - 1;
        }
    }

    void Cmatrix::printMatrix(int** matrix) {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j] << " ";
            }

            cout << "\n" << endl;
        }
    }

    void Cmatrix::freeMatrix(int** matrix) {

        for (int i = 0; i < size; i++) {
            free(matrix[i]);
        }

        free(matrix);
    }

    void Cmatrix::fillArrays(int* marked, int* distance, int startrow, int startcolumn) {

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

    void Cmatrix::searchWalls(int** matrix, int* distance, int* marked) {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                if (matrix[i][j] == -2) {
                    marked[i * size + j] = 1;
                    distance[i * size + j] = -1;

                }
            }
        }
    }


#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void searchMatrix(int**, int);

class point;
class Cmatrix;

int main() {
    int size=0;

    cout << "Please, enter size of the matrix \n" << endl;
    cin >> size;
 

 
    int** Matrix = new int*[size];
    fillMatrix(Matrix, size);

    printMatrix(Matrix, size);


    searchMatrix(Matrix, size);

    freeMatrix(Matrix, size);
    return 0;
}


void searchMatrix(int** matrix, int size) {

    int startrow, startcolumn, endrow, endcolumn = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (matrix[i][j] == 0) {
                startcolumn = j;
                startrow = i;
            }

            if (matrix[i][j] == -1) {
                endcolumn = j;
                endrow = i;
            }
        }
    }

    int* marked = new int[size * size];
    int* distance = new int[size * size];

    Cmatrix mymatrix(size);
    Cmatrix.fillArrays(marked, distance, size, startrow, startcolumn);
    searchWalls(matrix, size, distance, marked);

    while (1) {
        int currpos = startrow * size + startcolumn;
        int breaker = 0;

        point current(matrix[startrow][startcolumn]);
        current.scanType(matrix[startrow][startcolumn]);

        current.addToMarked(marked, currpos);
        breaker = current.searchNeighbors(matrix, distance, startrow, startcolumn, size);
        cout << "\n Type is: " << current.getType() << " Number point: " << startrow + 1 << " " << startcolumn + 1 << endl;

        cout << "\n distance:" << endl;

        for (int i = 0; i < size * size; i++) {
            cout << distance[i] << " ";
        }

        marked[currpos] = 1;
        cout << "\n marked:" << endl;

        for (int i = 0; i < size * size; i++) {
            cout << marked[i] << " ";
        }

        int min = 999999;
        int posmin = 0;

        for (int i = 0; i < size * size; i++) {

            if (distance[i] != 0 && distance[i] <= min && marked[i] != 1) {
                min = distance[i];
                posmin = i;

            }
        }

        startrow = posmin / size;
        startcolumn = posmin % size;
        int sum = size * size;
        int sum2 = 0;
        for (int i = 0; i < size * size; i++) {
            sum2 = sum2 + marked[i];
        }
        if (sum2 == sum || breaker == 0) {
            break;
        }

    }
    cout << "\n Your way is:" << distance[endrow * size + endcolumn] << "\n" << endl;
    cout << "\n number:" << matrix[endrow][endcolumn] << endl;
    point end(matrix[endrow][endcolumn]);
    end.scanType(matrix[endrow][endcolumn]);
    string type = end.getType();
    cout << "\n Your type is:" << type << "\n" << endl;
}

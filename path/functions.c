#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;
class point {
public:
    point(int mark) {
        number = mark;
    }
    void scanType(int number) {
        if (number == -1) {
            type = "end";
            value = 1;
        }
        if (number > 0) {
            type = "point";
            value = number;
        }
        if (number == -2) {
            type = "wall";
            value = -1;
        }
        if (number == 0) {
            type = "beginning";
            value = 0;
        }

    }
    int getValue() {
        return value;
    }
    string getType() {
        return type;
    }
private:
    int value;
    int number;
    string type;
};


void fillMatrix(int** matrix, int size) {

    int position = 0;
    int sizecurr = size;
    int row = 1;


    while (size != 0) {
        int* Array = new int[sizecurr];


        for (int i = 0; i < sizecurr; i++) {

            cout<<"Enter "<< i+1 << " element "<< row << " row \n"<< endl;
            cin>> Array[i];
        }

        row = row + 1;
        matrix[position] = Array;
        position = position + 1;
        size = size - 1;
    }
}

void printMatrix(int** matrix, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << endl;
        }

        cout << "\n" << endl;
    }
}

void freeMatrix(int** matrix, int size) {

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }

    free(matrix);
}
void fillArrays(int* marked, int* distance, int size, int startrow, int startcolumn) {

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

void searchWalls(int** matrix, int size, int* distance, int* marked) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (matrix[i][j] == -2) {
                marked[i * size + j] = 1;
                distance[i * size + j] = -1;

            }
        }
    }
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

    fillArrays(marked, distance, size, startrow, startcolumn);
    searchWalls(matrix, size, distance, marked);

    while (1) {

        int currpos = startrow * size + startcolumn;
        int breaker = 0;

        if (startcolumn + 1 < size) {

            if ((distance[currpos + 1] > distance[currpos] + matrix[startrow][startcolumn + 1] || distance[currpos + 1] == 0) && distance[currpos + 1] >= 0) {
                distance[currpos + 1] = distance[currpos] + matrix[startrow][startcolumn + 1];
                breaker = 1;

            }
        }
        if (startcolumn - 1 >= 0) {

            if ((distance[currpos - 1] > distance[currpos] + matrix[startrow][startcolumn - 1] || distance[currpos - 1] == 0) && distance[currpos - 1] >= 0) {
                distance[currpos - 1] = distance[currpos] + matrix[startrow][startcolumn - 1];
                breaker = 1;
            }
        }
        if (startrow - 1 >= 0) {

            if ((distance[currpos - size] > distance[currpos] + matrix[startrow - 1][startcolumn] || distance[currpos - size] == 0) && distance[currpos - size] >= 0) {
                distance[currpos - size] = distance[currpos] + matrix[startrow - 1][startcolumn];
                breaker = 1;

            }
        }
        if (startrow + 1 < size) {
            if ((distance[currpos + size] > distance[currpos] + matrix[startrow + 1][startcolumn] || distance[currpos + size] == 0) && distance[currpos + size]) {
                distance[currpos + size] = distance[currpos] + matrix[startrow + 1][startcolumn];
                breaker = 1;

            }
        }
        cout<<"\n distance:"<<endl;

        for (int i = 0; i < size * size; i++) {
            cout << distance[i]<<" ";
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
    cout<<"\n Your way is:"<< distance[endrow * size + endcolumn] << "\n" << endl;
    cout << "\n number:" << matrix[endrow][endcolumn] << endl;
    point end(matrix[endrow][endcolumn]);
    end.scanType(matrix[endrow][endcolumn]);
    string type = end.getType();
    cout << "\n Your type is:" <<type<< "\n" << endl;

}

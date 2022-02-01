#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void fillMatrix(int**, int);
void printMatrix(int**, int);
void freeMatrix(int**, int);
void searchMatrix(int**, int);

class point{
public:
    point(int mark) {
        number = mark;
    }
    void scanType(int mark) {
        if (mark == -1) {
            type = "end";
            value = 1;
        }
        if (mark > 0) {
            type = "point";
            value = mark;
        }
        if (mark == -2) {
            type = "wall";
            value = -1;
        }
        if (mark == 0) {
            type = "beginning";
            value = 0;
        }

    }
    int getValue(int mark) {
        return value;
    }
    string getType(int mark) {
        return type;
    }
private:
    int value;
    int number;
    string type;
};

int main() {
    int size;


    cout << "Please, enter size of the matrix \n" << endl;
    cin >> size;
 

 
    int** Matrix = new int*[size];
    fillMatrix(Matrix, size);

    printMatrix(Matrix, size);


    searchMatrix(Matrix, size);

    freeMatrix(Matrix, size);
    return 0;
}

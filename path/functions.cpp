#include <iostream>
#include <string>
#include <stdlib.h>
#include "my_functions.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

enum Types
{
    beginning = 0,
    cell = 1,
    wall = -2,
    end = -1
};

    int value=0;
    int number=0;
    string type;

    void point::getNumber(int mark) {
        number = mark;
    }
    void point::scanType(int number) {
        switch (number) {
        case Types::beginning:
            type = "beginning";
            value = 0;
            break;
        case Types::cell:
            type = "point";
            value = number;
            break;
        case Types::wall:
            type = "wall";
            value = -1;
            break;
        case Types::end:
            type = "end";
            value = 1;
            break;
        }
    }

    void point::addToMarked(int* marked, int currpos) {
        if (type == "wall" || type == "point") {
            marked[currpos] = 1;
        }
    }
    int point::searchNeighbors(int** matrix, int* distance, int row, int column, int size) {
        int currpos = row * size + column;
        int breaker = 0;
        if (column + 1 < size) {

            if ((distance[currpos + 1] > distance[currpos] + matrix[row][column + 1] || distance[currpos + 1] == 0) && distance[currpos + 1] >= 0) {
                distance[currpos + 1] = distance[currpos] + matrix[row][column + 1];
                breaker = 1;

            }
        }
        if (column - 1 >= 0) {

            if ((distance[currpos - 1] > distance[currpos] + matrix[row][column - 1] || distance[currpos - 1] == 0) && distance[currpos - 1] >= 0) {
                distance[currpos - 1] = distance[currpos] + matrix[row][column - 1];
                breaker = 1;

             
            }
        }
        if (row - 1 >= 0) {

            if ((distance[currpos - size] > distance[currpos] + matrix[row - 1][column] || distance[currpos - size] == 0) && distance[currpos - size] >= 0) {
                distance[currpos - size] = distance[currpos] + matrix[row - 1][column];
                breaker = 1;

    

            }
        }
        if (row + 1 < size) {
            if ((distance[currpos + size] > distance[currpos] + matrix[row + 1][column] || distance[currpos + size] == 0) && distance[currpos + size]) {
                distance[currpos + size] = distance[currpos] + matrix[row + 1][column];
                breaker = 1;
            }
        }
        return breaker;
    }
    int point::getValue() {
        return value;
    }
    string point::getType() {
        return type;
    }
   





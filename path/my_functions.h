

class point {
public:

    point(int );
    void scanType(int );

    void addToMarked(int*, int);
    int searchNeighbors(int** , int* , int , int , int );
    int getValue();
    string getMyType();

};
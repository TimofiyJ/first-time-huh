using std::string;
using std::cout;
using std::cin;
using std::endl;

class CPoint {
public:

    void getNumber(int );
    void scanType(int );

    void addToMarked(int*, int);
    int searchNeighbors(int** , int* , int , int , int );
    int getValue();
    string getType();

};
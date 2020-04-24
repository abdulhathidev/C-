/*
 Diagnol matrix
 
    1 0 0 0
    0 2 0 0
    0 0 3 0
    0 0 0 4
*/
#include <iostream>
using namespace std;

class DiagonalMatrix
{
private:
    int size;
    int *array;
public:
    DiagonalMatrix(int size)
    {
        this->size = size;
        array = new int[size];
    }
    int Get(int i, int j)
    {
        return i == j ? array[i] : 0;
    }
    void Set(int i, int j, int val)
    {
        if(i == j) array[i] = val;
    }
    void Display()
    {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << Get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
//    DiagonalMatrix dm(4);
//    dm.Set(0, 0, 1);
//    dm.Set(1, 1, 2);
//    dm.Set(2, 2, 3);
//    dm.Set(3, 3, 4);
//    dm.Display();
    
    cout << "Please enter the dimention of the Diagonal Matrix : ";
    int d,val;
    cin >> d;
    DiagonalMatrix dm(d);
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            cin >> val;
            dm.Set(i, j, val);
        }
    }
    cout << endl;
    dm.Display();
}

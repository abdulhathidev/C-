#include <iostream>
using namespace std;

int main()
{
    int A = 10;
    int *P = &A;

    cout << A << endl;
    cout << &A << endl;
    cout << P << endl;
    cout << &P << endl;
    cout << *P << endl;

    int x = 10;
    int *y = &x;
    int *&z = y;

    cout << &x << endl;
    cout << y << endl;
    cout << z << endl;
    return 1;
}
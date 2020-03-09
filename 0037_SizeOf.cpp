#include <iostream>

using namespace std;

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    cout << sizeof A << endl;
    int *P = A;
    int *Q = &A[5];
    //delete[] P;
    //P = new int[10]{1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    cout << sizeof P << endl;
    cout << P - Q << endl;
    cout << P << endl;
    P++;
    cout << P << endl;
    P--;
    cout << P[3] << endl;
    P = P + 3;
    cout << P[3] << endl;

    return 1;
}
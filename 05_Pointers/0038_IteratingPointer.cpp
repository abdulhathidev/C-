#include <iostream>

using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *P = A;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i[A] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(A + i) << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << (A + i) << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << P[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *P << " ";
        P++;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << P << " ";
        P++;
    }
    cout << endl;
    return 1;
}
#include <iostream>

using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    float F[4] = {1.0, 3.0, 6.0, 4.0};
    char C[] = {'A', 67, 68, 'Z'};

    int A1[5] = {1, 2, 0, 0, 0};
    float A2[] = {1.5f, 2, 3.9f, 67, 9};

    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";
    cout << endl;

    for (int i = 0; i < 4; i++)
        cout << F[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << (char)C[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << A1[i] << " ";
    cout << endl;

    for (float i : A2)
        cout << i << " ";
    cout << endl;

    for (int x : A)
        cout << x << " ";
    cout << endl;

    //For Each Auto
    for (auto x : A)
    {
        cout << ++x << " ";
    }
    cout << endl;
}

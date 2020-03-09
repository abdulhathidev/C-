#include <iostream>

using namespace std;

void Create2DArray()
{
    int A[2][3] = {{2, 3, 1}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int B[2][3] = {{3, 4, 5}, {8, 9, 7}};
    for (auto &x : B)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void AddTwoMatrix()
{
    int A[2][3] = {{2, 3, 1}, {4, 5, 6}};
    int B[2][3] = {{3, 4, 5}, {8, 9, 7}};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Create2DArray();
    AddTwoMatrix();
    return 1;
}

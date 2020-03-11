#include <iostream>

using namespace std;

void PrintXY()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "(" << i << "," << j << ")";
        cout << endl;
    }
}
void PrintSquare()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }
}
void PrintLowerTriangle()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j <= i)
                cout << "* ";
        cout << endl;
    }
}
void PrintUpperTriangle()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j >= i)
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
}
void PrintUpperDownTriangle()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if ((i + j + 1) >= n)
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
}
void PrintLowerDownTriangle()
{
    cout << "Enter the matrix dimention : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if ((i + j + 1) <= n)
                cout << "* ";
        cout << endl;
    }
}
int main()
{
    PrintXY();
    PrintSquare();
    PrintLowerTriangle();
    PrintUpperTriangle();
    PrintUpperDownTriangle();
    PrintLowerDownTriangle();
    return 1;
}
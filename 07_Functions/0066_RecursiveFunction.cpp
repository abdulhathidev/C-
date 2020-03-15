#include <iostream>

using namespace std;

void PrintNNumbersDesc(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        PrintNNumbersDesc(n - 1);
    }
}

void PrintNNumbersAsc(int n)
{
    if (n > 0)
    {
        PrintNNumbersAsc(n - 1);
        cout << n << " ";
    }
}

int main()
{
    PrintNNumbersAsc(5);
    cout << endl;
    PrintNNumbersDesc(5);
    cout << endl;
    return 0;
}
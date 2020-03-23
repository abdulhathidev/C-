#include <iostream>

using namespace std;

int Sum(int n, ...)
{
    va_list list;
    va_start(list, n);

    int x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        x = va_arg(list, int);
        sum += x;
    }
    return sum;
}

int main()
{
    cout << Sum(4, 1, 2, 3, 4) << endl;
}
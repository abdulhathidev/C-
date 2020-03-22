#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 0, c;

    try
    {
        if (b == 0)
            throw 1;
        c = a / b;
    }
    catch (int e)
    {
        cout << "Divisiont by zero " << e << '\n';
    }
}
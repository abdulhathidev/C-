#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5, c = 0;
    cout << "Enter the number b : ";
    cin >> b;
    if (a < b && ++c > a)
    {
        cout << c << endl;
    }
    else if (a > b || ++c > a)
        cout << c << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number : ";
    int d;
    cin >> d;
    while (d > 0)
    {
        cout << d % 10;
        d /= 10;
    }
    cout << endl;
    return 0;
}
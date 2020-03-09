#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number to reverse : ";
    int x, n, r = 0;
    cin >> x;
    n = x;
    while (n > 0)
    {
        r = r * 10 + (n % 10);
        n = n / 10;
    }
    if (r == x)
        cout << x << " is a palindrome" << endl;
    else
        cout << x << " is not a palindrome" << endl;
}
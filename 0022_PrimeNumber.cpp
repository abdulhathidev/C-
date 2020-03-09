#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number : ";
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        cout << n << " is prime number" << endl;
    else
        cout << n << " is not prime number" << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number to find its factors : ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " is the factor of " << n << endl;
    return 0;
}
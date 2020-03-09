#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number to find its a Perfect ot not : ";
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == 2 * n)
        cout << n << " is the perfect number" << endl;
    else
        cout << n << " is not the perfect number" << endl;
}
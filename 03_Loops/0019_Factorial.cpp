#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the factorial number : ";
    int n, result = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        result *= i;
    cout << "Factorial of " << n << " is : " << result << endl;
    return 0;
}
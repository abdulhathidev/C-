#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number : ";
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum of N natural number is : " << sum << endl;
}
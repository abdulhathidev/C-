#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the multiplication table number : ";
    int number;
    cin >> number;
    for (int i = 1; i <= 10; i++)
        cout << i << " X " << number << " = " << number * i << endl;
}
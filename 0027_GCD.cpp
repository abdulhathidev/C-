/*
    GCD - Greatest common divisor or Greatest common factor
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the two numbers to find the GCD : ";
    int n1, n2;
    cin >> n1 >> n2;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 -= n2;
        else if (n2 > n1)
            n2 -= n1;
        else if (n1 == n2)
        {
            cout << "The GCD of the two number is : " << n1 << endl;
            break;
        }
    }
}
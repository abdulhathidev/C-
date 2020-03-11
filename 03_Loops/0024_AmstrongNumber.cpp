#include <iostream>

using namespace std;

void FindGivenNumAsAmstrongNumber()
{
    cout << "Enter the number : ";
    int x, n, r, result = 0;
    cin >> x;
    n = x;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        result += r * r * r;
    }
    cout << "Result : " << result << endl;
    if (result == x)
        cout << x << " is an Amstrong number" << endl;
    else
        cout << x << " is not an Amstrong number" << endl;
}
void FindAmstronNumbersFrom1to1000()
{
    for (int i = 1; i <= 1000; i++)
    {
        int n, r, result = 0;
        n = i;
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
            result += r * r * r;
        }
        if (result == i)
            cout << result << ", ";
    }
}

int main()
{
    //FindGivenNumAsAmstrongNumber();
    FindAmstronNumbersFrom1to1000();
    return 1;
}
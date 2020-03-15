#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else
        return b > c ? b : c;
}
int main()
{
    cout << Max(7, 10, 5) << endl;
    return 0;
}
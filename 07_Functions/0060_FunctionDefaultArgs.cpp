#include <iostream>
using namespace std;

int Max(int a, int b = 0, int c = 0)
{
    return a > b && a > c ? a : b > c ? b : c;
}
int main()
{
    cout << Max(12) << endl;
    cout << Max(12, 14) << endl;
    cout << Max(12, 4, 20) << endl;
    return 0;
}
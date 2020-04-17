#include <iostream>
using namespace std;

int Power(int m, int n)
{
    if(n <= 0)
        return 1;
    return Power(m, n-1)*m;
}
int main()
{
    cout << "9 to the power of 3 : " << Power(9, 3) << endl;
    cout << "2 to the power of 2 : " << Power(2, 2) << endl;
}

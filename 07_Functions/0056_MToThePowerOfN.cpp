#include <iostream>
using namespace std;

int pow(int m, int n)
{
    int result = m;
    for (int i = 1; i < n; i++)
    {
        result *= m;
    }
    return result;
}
int main()
{
    cout << pow(2, 5) << endl;
    return 0;
}
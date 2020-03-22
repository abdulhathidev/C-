#include <iostream>

using namespace std;

void Division(int x, int y)
{
    if (y == 0)
        throw 1;
}
int main()
{
    try
    {
        int a = 4, b = 0, c;
        Division(a, b);
    }
    catch (int e)
    {
        cout << "Exception in the division function : " << e << endl;
    }
}
#include <iostream>

using namespace std;

static int x = 1;
void fun()
{
    static int x = 0;
    x++;
    ::x++;
    cout << x << endl;
}
int main()
{
    fun();
    fun();
    fun();
    fun();
    cout << x << endl;
    return 0;
}
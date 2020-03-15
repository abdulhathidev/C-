#include <iostream>

using namespace std;

int g = 5;
void fun()
{
    int g = 20;
    {
        int g = 30;
        cout << g << endl;
    }
    cout << g << endl;

    cout << ::g << endl;
}
int main()
{
    cout << g << endl;
    fun();
    return 0;
}
#include <iostream>

using namespace std;

class MyException
{
public:
    string exceptionMessage;
};

int Division(int x, int y) 
{
    if (y == 0)
        throw MyException();
    return x / y;
}
int main()
{
    try
    {
        int a = 4, b = 0, c;
        Division(a, b);
    }
    catch (MyException e)
    {
        cout << "Exception in the division function : " << e.exceptionMessage << endl;
    }
}
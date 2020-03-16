#include <iostream>

using namespace std;

class Your;
class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your;
};

class Your
{
public:
    Base base;
    void fun()
    {
        base.a = 10;
        base.b = 20;
        base.c = 30;
        cout << "a : " << base.a << " b : " << base.b << " c : " << base.c << endl;
    }
};

int main()
{
    Your y;
    y.fun();
}
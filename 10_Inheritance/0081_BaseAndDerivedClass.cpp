#include <iostream>

using namespace std;

class Base
{
public:
    int x;
    void DisplayBase()
    {
        cout << x << endl;
    }
};

class Derived : public Base
{
public:
    int y;
    void DisplayDerived()
    {
        cout << "X : " << x << " Y: " << y << endl;
    }
};

int main()
{
    Derived d;
    d.x = 1;
    d.y = 2;
    d.DisplayDerived();
}
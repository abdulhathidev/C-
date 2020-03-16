#include <iostream>

using namespace std;

class Base
{
public:
    void functionA()
    {
        cout << " A " << endl;
    }
    void functionB()
    {
        cout << " B " << endl;
    }
    void functionC()
    {
        cout << " C " << endl;
    }
};
class Derived : public Base
{
public:
    void functionD()
    {
        cout << " D " << endl;
    }
    void functionE()
    {
        cout << " E " << endl;
    }
};

int main()
{
    Base *p = new Derived();
    p->functionA();
    p->functionB();
    p->functionC();
}
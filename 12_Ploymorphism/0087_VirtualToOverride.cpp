#include <iostream>

using namespace std;

class Base
{
public:
    virtual void Display()
    {
        cout << "This is base class function" << endl;
    }
};
class Derived : public Base
{
public:
    void Display()
    {
        cout << "This is derived class function" << endl;
    }
};

int main()
{
    Base *p = new Derived();
    p->Display();
}
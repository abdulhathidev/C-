#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor is called" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destructor is called" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor is called" << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor is called" << endl;
    }
};

int main()
{
    Base *derivedPtr = new Derived();
    delete derivedPtr;
}
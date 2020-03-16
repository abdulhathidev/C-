#include <iostream>

using namespace std;

class Base
{
private:
    int x;

public:
    Base(int x)
    {
        this->x = x;
    }
    int GetX() { return x; }
    void DisplayBase()
    {
        cout << x << endl;
    }
};

class Derived : public Base
{
private:
    int y;

public:
    Derived(int x, int y) : Base(x)
    {
        this->y = y;
    }
    void DisplayDerived()
    {
        cout << "X : " << GetX() << " Y: " << y << endl;
    }
};

int main()
{
    Derived d(10, 20);
    d.DisplayDerived();
}
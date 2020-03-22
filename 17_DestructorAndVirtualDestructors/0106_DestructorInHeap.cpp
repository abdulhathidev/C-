#include <iostream>

using namespace std;

class Demo
{
    int *p;

public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor is called" << endl;
    }
    ~Demo()
    {
        delete[] p;
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Demo *demoPtr = new Demo();
    delete demoPtr;
}
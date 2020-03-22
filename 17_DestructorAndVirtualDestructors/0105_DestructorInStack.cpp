#include <iostream>

using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor is called" << endl;
    }
    ~Demo()
    {
        cout << "Destructor is called" << endl;
    }
};

void CallDemo()
{
    Demo d;
}
int main()
{
    CallDemo();
}
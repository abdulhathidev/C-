#include <iostream>

using namespace std;

class Base final
{
};

// class Derived : Base
// {

// }

class Test
{
    virtual void myTest() final
    {
    }
};

class dTest : Test
{
    // void myTest()
    // {
    // }
};

int main()
{
    auto data = 2 + 3.24 * 'a';

    cout << data << endl;
}
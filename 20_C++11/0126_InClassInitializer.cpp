#include <iostream>

using namespace std;

class Test
{
    int x = 10;
    int y = 20;

public:
    Test(int a, int b)
    {
        x = a;
        y = b;
    }
    Test() : Test(1, 1)
    {
    }
    void Display()
    {
        cout << "X : " << x << " Y : " << y << endl;
    }
};

int main()
{
    Test t;
    t.Display();

    Test t1(5, 6);
    t1.Display();
}
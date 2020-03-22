#include <iostream>

using namespace std;

class Test
{
public:
    int x = 1;
    int y;
    void Display() const
    {
        //x++;
        cout << x << endl;
    }
};

void FunConst(const int &x, int &y)
{
    //x++;
    y++;
    cout << " X : " << x << " Y : " << y << endl;
}

int main()
{
    Test t;
    t.Display();
    int x = 10, y = 20;
    FunConst(x, y);
}
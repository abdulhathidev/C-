#include <iostream>

using namespace std;

class Basic
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void fun();
};
void fun()
{
    Basic b;
    b.a = 10;
    b.b = 19;
    b.c = 15;
    cout << "a : " << b.a << " b : " << b.b << " c : " << b.c << endl;
}
int main()
{
    fun();
}
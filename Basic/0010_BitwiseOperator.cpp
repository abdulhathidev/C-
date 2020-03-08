#include <iostream>

using namespace std;

void XOROperater()
{
    char x = 3, y;
    y = ~x;
    cout << (int)y << endl;
}
void LeftShit()
{
    int x = 10, y;
    y = x << 2;
    cout << "Left shit 2 time : " << y << endl;
}
void RightShit()
{
    int x = 10, y;
    y = x >> 1;
    cout << "Right shit 1 time : " << y << endl;
}
int main()
{
    XOROperater();
    LeftShit();
    RightShit();
    return 0;
}
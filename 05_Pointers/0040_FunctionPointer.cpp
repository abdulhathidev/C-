#include <iostream>

using namespace std;

void Max(int x, int y)
{
    cout << "Max value is : " << ((x > y) ? x : y) << endl;
}
void Min(int x, int y)
{
    cout << "Min value is : " << ((x < y) ? x : y) << endl;
}
int main()
{
    void (*fp)(int, int);
    fp = Max;
    fp(100, 120);
    fp = Min;
    fp(100, 110);
    return 1;
}
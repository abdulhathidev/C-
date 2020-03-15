#include <iostream>

using namespace std;

void SwapCallByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SwapCallByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SwapCallByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 4, y = 6;
    SwapCallByValue(x, y);
    cout << "X : " << x << " Y: " << y << endl;
    SwapCallByAddress(&x, &y);
    cout << "X : " << x << " Y: " << y << endl;
    SwapCallByReference(x, y);
    cout << "X : " << x << " Y: " << y << endl;
    return 0;
}
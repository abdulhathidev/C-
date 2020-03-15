#include <iostream>

using namespace std;

int Min(int a, int b)
{
    return a < b ? a : b;
}
int Min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else
        return b < c ? b : c;
}
float Min(float a, float b)
{
    return a < b ? a : b;
}
int main()
{
    cout << Min(10, 5) << endl;
    cout << Min(12, 7, 9) << endl;
    cout << Min(18.0f, 9.0f) << endl;
    return 0;
}
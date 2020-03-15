#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}
float sum(float x, float y)
{
    return x + y;
}
int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(12.9f, 8.3f) << endl;
    cout << sum(10, 20, 30) << endl;
    return 0;
}
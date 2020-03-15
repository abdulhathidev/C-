#include <iostream>

using namespace std;

int *Add(int x)
{
    int *p = new int[x];
    for (int i = 0; i < x; i++)
    {
        p[i] = i + 1;
    }
    cout << p << endl;
    return p;
}
int main()
{
    int *q = Add(5);
    cout << q << endl;
    for (int i = 0; i < 5; i++)
        cout << q[i] << endl;
}
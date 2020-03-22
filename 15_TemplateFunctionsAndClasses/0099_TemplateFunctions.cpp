#include <iostream>

using namespace std;

template <class T>
T Maximum(T x, T y)
{
    return x > y ? x : y;
}

int main()
{
    cout << Maximum(10, 5) << endl;
    cout << Maximum(12.3, 11.2) << endl;
    cout << Maximum('b', 'a') << endl;
}
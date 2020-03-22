#include <iostream>

using namespace std;

template <class T>
class Test
{
public:
    T GetResult(T a, T b);
};

template <class T>
T Test<T>::GetResult(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    Test<int> t;
    cout << t.GetResult(24, 23) << endl;
}
#include <iostream>

using namespace std;

template <typename T>
void callIncreament(T p)
{
    p();
}
int main()
{
    []() { cout << "Hi how are you" << endl; }();
    [](int x, int y) { cout << "Sum of two num : " << x + y << endl; }(10, 20);
    auto sum = [](int x, int y) { return x + y; }(10, 20);
    cout << sum << endl;

    int a = 10;
    auto printNum = [a]() { cout << a << endl; };
    printNum();

    auto increamentNum = [&a]() { cout << ++a << endl; };
    increamentNum();

    callIncreament(increamentNum);
}
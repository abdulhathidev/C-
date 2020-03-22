#include <iostream>

using namespace std;

namespace First
{
void fun()
{
    cout << "first" << endl;
}
}; // namespace First

namespace Second
{
void fun()
{
    cout << "Second" << endl;
}
}; // namespace Second

using namespace Second;
int main()
{
    First::fun();
    fun();
}
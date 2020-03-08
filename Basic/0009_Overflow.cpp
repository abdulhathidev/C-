#include <iostream>

using namespace std;

int main()
{
    char c = 127;
    c++;
    cout << "Overflow of the charected 127 + 1 is : " << (int)c << endl;
}
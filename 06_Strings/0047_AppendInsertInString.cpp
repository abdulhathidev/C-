#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    str.append(" World");
    cout << str << endl;

    str.insert(3, "kk");
    cout << str << endl;

    str.insert(3, "Apple", 2);
    cout << str << endl;
}
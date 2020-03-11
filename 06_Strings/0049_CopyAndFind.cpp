#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "hello world";
    cout << str.find('l', 5) << endl;

    cout << str.find_first_of('o') << endl;
    cout << str.find_last_of('o') << endl;

    cout << str.find_first_of("eo") << endl;
}
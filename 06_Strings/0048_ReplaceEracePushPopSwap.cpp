#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Programming";
    str.replace(3, 4, "kk");
    cout << str << endl;

    str.push_back('z');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    string str1 = "ProgrammingC++";
    str.swap(str1);
    cout << str << endl;
    cout << str1 << endl;

    str.erase();
    cout << str << endl;
    cout << str1 << endl;
}

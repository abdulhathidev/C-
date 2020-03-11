#include <iostream>
using namespace std;

int main()
{
    string str = "Abdul Hathi";

    cout << str[3] << endl;
    cout << str[10] << endl;

    cout << str.at(5) << endl;

    string str1 = " Mohamed  ";
    cout << str + str1 << endl;
    cout << str.front() << endl;
    cout << str.back() << endl;

    cout << (str == str1) << endl;
}
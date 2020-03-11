#include <iostream>
using namespace std;

int main()
{
    string str = "today";

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    for (it = str.begin(); it != str.end(); it++)
    {
        *it = *it - 32;
    }
    cout << str << endl;

    string str1 = "today";
    string::reverse_iterator rit;
    for (rit = str1.rbegin(); rit != str1.rend(); rit++)
    {
        cout << *rit;
    }
    cout << endl;

    for (rit = str1.rbegin(); rit != str1.rend(); rit++)
    {
        *rit = *rit - 32;
    }
    cout << str1 << endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << endl;
    }
}
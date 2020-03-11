#include <iostream>
using namespace std;

int main()
{
    string str = "abdul";
    string rev = "";
    int len = str.length();
    rev.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    cout << rev << endl;

    if (rev == str)
        cout << "Its a palindrome" << endl;
    else
        cout << "its not a palindorme" << endl;
}
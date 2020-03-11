#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Abdul Hathi";
    cout << str << endl;

    // cout << "Enter your name : ";
    // cin >> str;
    // cout << str << endl;

    cout << "Enter your name & Read the full name : ";
    getline(cin, str);
    cout << str << endl;
}
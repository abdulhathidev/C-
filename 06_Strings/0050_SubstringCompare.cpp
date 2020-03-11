#include <iostream>
using namespace std;

int main()
{
    string str = "Abdul";

    cout << str.substr(2) << endl;

    cout << str.substr(1, 4) << endl;

    string str1 = "Hathi";

    cout << str.compare(str1) << endl;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a stirng value : ";
    string str;
    getline(cin, str);

    cout << "Length() of the string             : " << str.length() << endl;
    cout << "Size() of the string               : " << str.size() << endl;
    cout << "Capacity() of the string           : " << str.capacity() << endl;
    str.resize(100);
    cout << "Resize() of the string capacity    : " << str.capacity() << endl;
    cout << "Max_Size() of the string           : " << str.max_size() << endl;
    str.clear();
    cout << "Clear()  the string                : " << str << endl;
    if (str.empty())
        cout << "str is empty " << str << endl;
    else
        cout << "str is empty " << str << endl;
}
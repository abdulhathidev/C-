#include <iostream>
using namespace std;

void PrintFullName()
{
    string fullName;
    cout << "Enter your full name : ";
    getline(cin, fullName);
    cout << "You full name is " << fullName << endl;
}

int main(int argc, const char *argv[])
{
    cout << "Hello, World!\n";
    PrintFullName();
    return 0;
}

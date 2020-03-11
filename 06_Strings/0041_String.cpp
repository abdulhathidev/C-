#include <iostream>
using namespace std;

int main()
{
    char S[10] = "Abdul";
    char S1[10] = {'A', 'b', 'd', 'u', 'l'};
    char S2[] = {'A', 'b', 'd', 'u', 'l', '\0', 'H'};

    cout << S << endl;
    cout << S1 << endl;
    cout << S2 << endl;

    char *str = "Hello";
    string name = "AbdulHathi";

    cout << str << endl;
    cout << name << endl;
    return 0;
}
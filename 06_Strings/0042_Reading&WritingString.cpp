#include <iostream>
using namespace std;

int main()
{
    char S[20];
    char S1[30];
    cout << "Enter anything here : ";
    cin.get(S, 20);
    cout << S << endl;

    cin.ignore();

    cout << "Enter anything here : ";

    cin.get(S1, 30);
    cout << S1 << endl;

    return 0;
}
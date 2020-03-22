#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << hex << 163 << endl;
    cout << oct << 163 << endl;
    cout << dec << 163 << endl;

    cout << fixed << 123.731 << endl;
    cout << scientific << 123.731 << endl;

    cout << setw(10) << "Hello" << endl;
    //cout << 10 << ws << 20 << endl;
}
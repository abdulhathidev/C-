#include <iostream>
using namespace std;

void Area()
{
    cout << "Enter the base and hight : ";
    int a, b;
    float c;
    cin >> a >> b;
    c = (float)a * b / 2;
    cout << "Area : " << c << endl;
}

int main()
{
    Area();
    return 0;
}
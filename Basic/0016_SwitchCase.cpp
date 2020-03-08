#include <iostream>

using namespace std;

void PrintDay()
{
    int day;
    cout << "Enter the day number : ";
    cin >> day;
    switch (day)
    {
    default:
        cout << "Invalid Date" << endl;
        break;
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    }
}

void ArithOpt(int x, int y, int choice)
{
    switch (choice)
    {
    case 1:
        cout << x + y << endl;
        break;
    case 2:
        cout << x - y << endl;
        break;
    case 3:
        cout << x * y << endl;
        break;
    case 4:
        cout << x / y << endl;
        break;
    }
}

int main()
{
    PrintDay();
    cout << (10 & 6) << endl;
    switch (10 & 6)
    {
    case 1:
        cout << "One  ";

    case 2:
        cout << "Two ";

    case 3:
        cout << "Three ";
    }
    return 0;
}

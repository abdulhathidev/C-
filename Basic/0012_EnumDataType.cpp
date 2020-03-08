#include <iostream>

using namespace std;

enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    Day d = Sunday;
    cout << "Enum day data type value " << (Day)d << endl;
    return 0;
}
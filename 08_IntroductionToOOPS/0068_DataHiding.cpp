#include <iostream>

using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    int Area()
    {
        return Length * Breadth;
    }
    int Perimeter()
    {
        return 2 * (Length + Breadth);
    }
};

int main()
{
    Rectangle r1;
    // r1.Breadth = 10;
    // r1.Length = 20;
    cout << "Area : " << r1.Area() << endl;
    cout << "Perimeter : " << r1.Perimeter() << endl;
}
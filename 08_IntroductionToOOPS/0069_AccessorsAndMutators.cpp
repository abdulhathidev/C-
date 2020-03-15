#include <iostream>

using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    void SetLength(int length)
    {
        Length = length;
    }
    void SetBreadth(int breadth)
    {
        Breadth = breadth;
    }
    int GetLength() { return Length; }
    int GetBreadth() { return Breadth; }
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
    r1.SetBreadth(10);
    r1.SetLength(20);
    cout << "Area : " << r1.Area() << endl;
    cout << "Perimeter : " << r1.Perimeter() << endl;
}
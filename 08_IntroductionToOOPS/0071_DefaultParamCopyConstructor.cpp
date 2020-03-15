#include <iostream>

using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    Rectangle()
    {
        Length = 1;
        Breadth = 1;
    }
    Rectangle(int length, int breadth)
    {
        Length = length;
        Breadth = breadth;
    }
    Rectangle(Rectangle &rectangle)
    {
        Length = rectangle.Length + 1;
        Breadth = rectangle.Breadth + 1;
    }
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
    Rectangle r2(r1);
    cout << "Length : " << r2.GetLength() << endl;
    cout << "Breadth : " << r2.GetBreadth() << endl;
    cout << "Area : " << r2.Area() << endl;
    cout << "Perimeter : " << r2.Perimeter() << endl;
}
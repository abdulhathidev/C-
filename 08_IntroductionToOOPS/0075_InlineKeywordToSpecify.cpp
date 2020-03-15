#include <iostream>

using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    Rectangle(int l, int b)
    {
        this->Length = l;
        this->Breadth = b;
    }
    int Area()
    {
        return Length * Breadth;
    }
    inline int Perimeter();
};

int Rectangle::Perimeter()
{
    return 2 * (Length + Breadth);
}

int main()
{
    Rectangle rect(5, 5);
    cout << rect.Perimeter() << endl;
}
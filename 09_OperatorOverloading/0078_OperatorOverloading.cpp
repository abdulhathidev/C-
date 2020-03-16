#include <iostream>

using namespace std;

class Complex
{
public:
    int real;
    int imaginary;
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void Display()
    {
        cout << real << "+i" << imaginary << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.real = 2;
    c1.imaginary = 6;
    c2.real = 3;
    c2.imaginary = 7;

    c3 = c1.operator+(c2);
    c3.Display();
    c3 = c1 + c2;
    c3.Display();

    return 0;
}
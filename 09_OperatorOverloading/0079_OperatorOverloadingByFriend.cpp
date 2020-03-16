#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    friend Complex operator+(Complex c1, Complex c2);
    void Display()
    {
        cout << real << "+i" << imaginary << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main()
{
    Complex c1(2, 4), c2(3, 5), c3;
    c3 = c1 + c2;
    c3.Display();

    Complex c4(4, 2), c5(6, 2), c6;
    c6 = operator+(c4, c5);
    c6.Display();
}
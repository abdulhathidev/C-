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

    friend ostream &operator<<(ostream &out, Complex &c);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << "+i" << c.imaginary << endl;
    return o;
}

int main()
{
    Complex c1(2, 4), c2(3, 5), c3;
    c3 = c1 + c2;

    // cout << c3;
    operator<<(cout, c3);
}
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int Area()
    {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10, 20));
    cout << ptr->Area() << endl;

    unique_ptr<Rectangle> ptr2 = move(ptr);
    cout << ptr2->Area() << endl;
    //cout << ptr->Area() << endl;

    cout << "Shared pointer" << endl;
    shared_ptr<Rectangle> sPtr1(new Rectangle(30, 40));
    cout << sPtr1->Area() << endl;

    shared_ptr<Rectangle> sPtr2 = sPtr1;
    cout << sPtr2->Area() << endl;
    cout << "Reference Counter : " << sPtr1.use_count() << endl;
}
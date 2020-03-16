#include <iostream>

using namespace std;

class Outer
{
private:
    class Inner
    {
        Inner()
        {
            cout << "Inner object" << endl;
        }

    public:
        void Display()
        {
            cout << "This is Inner display" << endl;
        }
    };

public:
    static int no;
    void fun()
    {
        i.Display();
    }

    Inner i;
};

int main()
{

    //o.i.Display();
}
#include <iostream>

using namespace std;

class Humen
{
private:

public:
    Humen()
    {
        cout << "I am a Humen" << endl;
    }
    Humen(int sex)
    {
        cout << "This humen is " << (sex == 1 ? "Male" : "Female") << endl;
    }
    void Life()
    {
        cout << "Humen has the life" << endl;
    }
};
class Parent : virtual public Humen
{
public:
    Parent()
    {
        cout << "I am a parent" << endl;
    }
};

class Child : virtual public Humen
{
public:
    Child()
    {
        cout << "I am a child" << endl;
    }
};

class GrantChild : public Parent, Child
{
public:
    GrantChild()
    {
        Life();
        cout << "I am a GrantChild" << endl;
    }
};

int main()
{
    GrantChild gc;
}
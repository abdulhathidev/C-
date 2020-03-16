#include <iostream>

using namespace std;

class Car
{
public:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    void Display()
    {
        cout << "Car display" << endl;
    }
};
class Honda : public Car
{
public:
    void Start()
    {
        cout << "Honda is Started" << endl;
    }
    void Stop()
    {
        cout << "Honda is Stopped" << endl;
    }
};
class Toyota : public Car
{
public:
    void Start()
    {
        cout << "Toyota is Started" << endl;
    }
    void Stop()
    {
        cout << "Toyota is Stopped" << endl;
    }
};

int main()
{
    Car *honda = new Honda();
    Car *toyota = new Toyota();

    honda->Start();
    toyota->Start();
    honda->Display();
}
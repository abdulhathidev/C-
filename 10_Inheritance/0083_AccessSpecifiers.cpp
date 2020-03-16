#include <iostream>

using namespace std;

class Base
{
private:
    int x;

public:
    Base(int x)
    {
        this->x = x;
    }
    int GetX() { return x; }
    void DisplayBase()
    {
        cout << x << endl;
    }
};

class Derived : protected Base
{
private:
    int y;

public:
    Derived(int x, int y) : Base(x)
    {
        this->y = y;
    }
    void DisplayDerived()
    {
        cout << "X : " << GetX() << " Y: " << y << endl;
    }
};

class Point
{
private:
    int x;

protected:
    int y;

public:
    void DisplayPoint() { cout << "X : " << x << " Y : " << y; }
};

class Graph : public Point
{
private:
    int z;

public:
    Graph(int a, int b, int c)
    {
        y = b;
        z = c;
    }
    void DisplayGraph()
    {
        DisplayPoint();
        cout << " Z : " << z << endl;
    }
};

int main()
{
    Derived d(10, 20);
    d.DisplayDerived();

    Graph g(1, 2, 3);
    g.DisplayGraph();
}
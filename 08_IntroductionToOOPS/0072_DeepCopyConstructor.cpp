#include <iostream>

using namespace std;

class Test
{
private:
    int len;
    int *array;

public:
    Test()
    {
    }
    Test(int l)
    {
        len = l;
        array = new int[len];
        for (int i = 0; i < len; i++)
        {
            array[i] = i + 1;
        }
    }
    Test(Test &t)
    {
        len = t.len;
        //array = t.array;
        array = new int[len];
        for (int i = 0; i < len; i++)
            array[i] = t.array[i];
    }
    void PrintArray()
    {
        for (int i = 0; i < len; i++)
        {
            cout << &array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Test t(5);
    t.PrintArray();
    Test t1(t);
    t1.PrintArray();
}
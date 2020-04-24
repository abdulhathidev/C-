#include <iostream>
using namespace std;

//Last in First out (LIFO)

class Stack
{
private:
    int Size;
    int Top;
    int *Arr;
public:
    Stack(int size)
    {
        this->Size = size;
        this->Top = -1;
        this->Arr = new int[size];
    }
    void Push(int val)
    {
        if(Top + 1 == Size)
            throw string("Stack is full !!!");
        Arr[++Top] = val;
    }
    int Pop()
    {
        if(Top >= 0)
            return Arr[Top--];
        else
            throw string("Stack is empty !!!");
    }
    bool IsEmpty()
    {
        return Top < 0;
    }
    int StackTop()
    {
        return Arr[Top];
    }
};

int main()
{
    Stack stack(10);
    int i = 1;
    while (i <= 10) {
        //cin >> x;
        stack.Push(i++);
    }
    cout << "This Stack is empty ? " << (stack.IsEmpty() == 0 ? "No it's not" : "Yes it's") << endl;
    cout << "Stack Popout   : " << stack.Pop() << endl;
    cout << "Stack Top      : " << stack.StackTop() << endl;
}

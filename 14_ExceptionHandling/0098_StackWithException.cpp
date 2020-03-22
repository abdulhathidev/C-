#include <iostream>

using namespace std;

class StackOverFlow : exception
{
};
class Stack
{
private:
    int Top;
    int Size;
    int *A;

public:
    Stack(int size)
    {
        Top = 1;
        this->A = new int[size];
        Size = size;
    }
    void Push(int val)
    {
        if (Top == Size)
            throw StackOverFlow();
        else
        {
            this->A[Top++] = val;
        }
    }
    int Pop()
    {
        if (Top == 0)
            throw string("Stack is Empty !");
        else
        {
            return this->A[Top--];
        }
    }
};

int main()
{
    try
    {
        Stack st(10);
        st.Push(3);
        st.Push(4);
        st.Push(3);
        st.Push(4);
        st.Push(3);
        st.Push(4);
        st.Push(3);
        st.Push(4);
        st.Push(3);
        st.Push(4);
    }
    catch (StackOverFlow e)
    {
        cout << "StackOverFlow Exception" << endl;
    }
    catch (...)
    {
        cout << "All Exception" << endl;
    }
}
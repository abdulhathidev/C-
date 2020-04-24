#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *Next;
    Node(int data)
    {
        this->Data = data;
    }
};

class Stack
{
private:
    Node *Top;
public:
    void Push(int value)
    {
        if(Top == nullptr)
            Top = new Node(value);
        else
        {
            auto node = new Node(value);
            node->Next = Top;
            Top = node;
        }
    }
    int Pop()
    {
        int r;
        if(Top == nullptr)
            throw string("Stack is Empty !!!");
        else
        {
            Node *result = Top;
            Top = Top->Next;
            r = result->Data;
            free(result);
            return r;
        }
    }
    bool IsEmpty()
    {
        return Top == nullptr;
    }
    int StackTop()
    {
        if (Top == nullptr) {
            throw string("Stack is Empty !!!");
        }
        return Top->Data;
    }
};
int main()
{
    Stack stack;
    stack.Push(10);
    stack.Push(11);
    stack.Push(12);
    stack.Push(13);
    stack.Push(14);
    cout << "Pop            : " << stack.Pop() << endl;
    cout << "Stack Top      : " << stack.StackTop() << endl;
    cout << "Stack is empty : " << stack.IsEmpty() << endl;
    
}

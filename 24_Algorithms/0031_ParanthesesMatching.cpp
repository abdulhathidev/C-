#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
    T Data;
    Node *Next = NULL;
    Node(T data)
    {
        this->Data = data;
    }
};

template <class T>
class Stack
{
private:
    Node<T> *Top = NULL;
public:
    void Push(T value)
    {
        if(IsEmpty())
            Top = new Node<T>(value);
        else
        {
            Node<T> *node = new Node<T>(value);
            node->Next = Top;
            Top = node;
        }
    }
    T Pop()
    {
        int r;
        if(IsEmpty())
            throw string("Stack is Empty !!!");
        else
        {
            Node<T> *result = Top;
            Top = Top->Next;
            r = result->Data;
            delete result;
//            if(Top == NULL)
//                cout << "Top is NULL" << endl;
            return r;
        }
    }
    bool IsEmpty()
    {
        if(Top == NULL)
            return true;
        else
            return  false;
    }
    T StackTop()
    {
        if (IsEmpty()) {
            throw string("Stack is Empty !!!");
        }
        return Top->Data;
    }
};

class Paranthesis
{
private:
    Stack<char> stack;
public:
    bool IsBalanced(char *exp)
    {
        for (int i = 0; exp[i] != '\0'; i++) {
            if(exp[i] == '(')
                stack.Push(exp[i]);
            else if(exp[i] == ')')
            {
                if(!stack.IsEmpty())
                {
                    stack.Pop();
                }
                else
                    return false;
            }
        }
        return stack.IsEmpty();
    }
};

int main()
{
    char *exp = "(a+b)";
    Paranthesis paranthesis;
    cout << "This expression is Balanced ? : " << (paranthesis.IsBalanced(exp) == 1 ? "Yes its Balanced" : "No its not balanced") << endl;
}

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
    Node(int data)
    {
        this->data = data;
    }
};

class Queue
{
private:
    Node *first = NULL;
    Node *last = NULL;
public:
    void Enqueue(int value)
    {
        if(IsEmpty())
        {
            first = new Node(value);
            last = first;
        }
        else
        {
            Node *temp = new Node(value);
            last->next = temp;
            last = last->next;
        }
    }
    int Dequeue()
    {
        if(IsEmpty())
            throw string("Queue is Empty !!!");
        else
        {
            int r;
            Node *result = first;
            first = first->next;
            r = result->data;
            delete result;
            return r;
        }
    }
    bool IsEmpty()
    {
        return first == NULL;
    }
};

int main()
{
    try
    {
        Queue queue;
        queue.Enqueue(10);
        queue.Enqueue(11);
        queue.Enqueue(12);
       
        for (int i = 0; i < 4; i++) {
            cout << queue.Dequeue() << endl;
        }
    }
    catch(string ex)
    {
        cout << ex << endl;
    }
}

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class QueueByLinkedList
{
private:
    Node *front = NULL;
    Node *rear = NULL;
public:
    void Enqueue(int value)
    {
        if(IsEmpty())
        {
            front = new Node(value);
            rear = front;
        }
        else
        {
            rear->next = new Node(value);
            rear = rear->next;
        }
    }
    int Dequeue()
    {
        int x = -1;
        if(IsEmpty())
            throw string("Queue is empty");
        else
        {
            Node *temp = front;
            front = front->next;
            x = temp->data;
            delete temp;
        }
        return x;
    }
    bool IsEmpty()
    {
        return front == NULL;
    }
};

void main_QueueByLinkedList()
{
    try {
        QueueByLinkedList queue;
        queue.Enqueue(10);
        queue.Enqueue(20);
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
    } catch (string ex) {
        cout << ex << endl;
    }
}

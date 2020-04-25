#include <iostream>
using namespace std;

class QueueWithResetPointer
{
private:
    int first;
    int last;
    int size;
    int *arr;
public:
    QueueWithResetPointer(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->first = this->last = -1;
    }
    bool IsEmpty()
    {
        return first == last;
    }
    void Enqueue(int value)
    {
        if(last == first)
            this->first = this->last = -1;
        if(last == size-1)
            throw string("Queue is full");
        else
        {
            arr[++last] = value;
        }
    }
    int Dequeue()
    {
        if(IsEmpty())
            throw string("Queue is empty");
        else
        {
            cout << "Front : " << first << " Last : " << last << endl;
            return arr[++first];
        }
    }
};

void main_QueueByArrayAndResetPointer()
{
    try
    {
        QueueWithResetPointer queue(5);
        queue.Enqueue(1);
        queue.Enqueue(2);
        queue.Enqueue(3);
        queue.Enqueue(4);
        queue.Enqueue(5);
        //queue.Enqueue(6);
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
        cout << "Dequeue : " << queue.Dequeue() << endl;
        queue.Enqueue(5);
        cout << "Dequeue : " << queue.Dequeue() << endl;
        
    }
    catch(string ex)
    {
        cout << ex <<endl;
    }
}

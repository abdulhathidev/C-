#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int first;
    int last;
    int size;
    int *arr;
public:
    CircularQueue(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->first = this->last = 0;
    }
    bool IsEmpty()
    {
        return true;
    }
    void Enqueue(int value)
    {
        if((last + 1) % size == first)
            throw string("Queue is full");
        else
        {
            last = (last + 1) % size;
            arr[last] = value;
        }
    }
    int Dequeue()
    {
        if(first == last)
            throw string("Queue is empty");
        else
        {
            first = (first + 1) % size;
            return arr[first];
        }
    }
};

void main_CircularQueue()
{
    try {
        CircularQueue queue(4);
        //queue.Dequeue();
        queue.Enqueue(10);
        cout << "Dequeue : " << queue.Dequeue() << endl;
        queue.Enqueue(10);
        queue.Enqueue(20);
        queue.Enqueue(30);
        queue.Enqueue(40);
    } catch (string ex) {
        cout << ex << endl;
    }
    
}

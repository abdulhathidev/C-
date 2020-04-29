#include <iostream>
using namespace std;

void LogMessage(char *message);

class QueueByArray
{
private:
    int first;
    int last;
    int *arr;
    int size;
public:
    QueueByArray(int size)
    {
        this->arr = new int[size];
        this->size = size;
        this->first = this->last = -1;
    }
    void Enqueue(int value)
    {
       if(last == size - 1)
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
            return arr[++first];
        }
    }
    void Display()
    {
        if(!IsEmpty())
        {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    bool IsEmpty()
    {
        return first == last;
    }
};

void main_queuebyarray()
{
    //LogMessage("Hi how are you");
    QueueByArray queue(5);
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    queue.Enqueue(5);
    queue.Display();
    cout << "Dequeue : " << queue.Dequeue() << endl;
    queue.Display();
}

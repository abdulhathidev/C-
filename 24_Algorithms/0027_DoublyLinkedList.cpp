#include <iostream>
using namespace std;

class Node
{
public:
    Node *Previous;
    int Data;
    Node *Next;
    Node(int data, Node *prev = nullptr, Node *next = nullptr)
    {
        this->Data = data;
        this->Previous = prev;
        this->Next = next;
    }
};

class Array
{
public:
    int Size;
    int *Arr;
    Array(int size)
    {
        this->Size = size;
        Arr = new int[size];
    }
    Array(int size, int arr[])
    {
        this->Size = size;
        Arr = arr;
    }
};

class DoublyLinkedList
{
public:
    Node *Root;
    Node *Create(Array array)
    {
        Node *node = new Node(array.Arr[0]);
        Node *temp = node;
        for (int i = 1; i < array.Size; i++) {
            temp->Next = new Node(array.Arr[i],temp);
            temp = temp->Next;
        }
        return node;
    }
    void Display()
    {
        Node *temp = Root;
        while (temp != NULL) {
            cout << temp->Data << " P: " << (temp->Previous != NULL ? temp->Previous->Data : -1) << " N: "
            << (temp->Next != NULL ? temp->Next->Data : -1)<< endl;
            temp = temp->Next;
        }
        cout << endl;
    }
};

int main()
{
    Array arr = Array(4, new int[] { 1,2,3,4});
    DoublyLinkedList dLinkedList;
    dLinkedList.Root = dLinkedList.Create(arr);
    dLinkedList.Display();
}

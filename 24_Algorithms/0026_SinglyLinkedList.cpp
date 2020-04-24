#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Node
{
public:
    Node *Next;
    int Data;
    Node(int data)
    {
        this->Data = data;
        this->Next = NULL;
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

class SinglyLinkedList
{
public:
    Node *root;
    
    Node *Create(Array array)
    {
        Node *last, *temp;
        Node *newNode = new Node(array.Arr[0]);
        last = newNode;
        for (int i = 1; i < array.Size; i++) {
            temp = new Node(array.Arr[i]);
            last->Next = temp;
            last = temp;
        }
        return newNode;
    }
    
    Node *CreateLooped(Array array)
    {
        Node *last, *temp;
        Node *newNode = new Node(array.Arr[0]);
        last = newNode;
        for (int i = 1; i < array.Size; i++) {
            temp = new Node(array.Arr[i]);
            last->Next = temp;
            last = temp;
        }
        last->Next = newNode;
        return newNode;
    }
    
    void Display()
    {
        Node *temp = root;
        while (temp != NULL) {
            cout << temp->Data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
    
    void Display(Node *node)
    {
        Node *temp = node;
        while (temp != NULL) {
            cout << temp->Data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
    
    void Insert(int value, int index)
    {
        int i = 0;
        Node *temp = root;
        Node *p = new Node(value);
        if (index == 0) {
            p->Next = root;
            root = p;
        }
        else
        {
            while (temp != NULL) {
                if(i == index - 1)
                {
                    p->Next = temp->Next;
                    temp->Next = p;
                    break;
                }
                i++;
                temp = temp->Next;
            }
        }
        
    }

    void DeleteByIndex(int index)
    {
        if(index == 0)
            root = root->Next;
        else
        {
            Node *temp = root;
            int i = 0;
            while(temp != NULL)
            {
                if(i == index - 1 && temp->Next != NULL)
                {
                    temp->Next = temp->Next->Next;
                    break;
                }
                i++;
                temp = temp->Next;
            }
        }
        Display();
    }

    void DeleteByValue(int value)
    {
        if(value == root->Data)
            root = root->Next;
        else
        {
            Node *temp = root, *prev = NULL;
            while(temp != NULL)
            {
                if(temp->Data == value)
                {
                    temp = temp->Next;
                    prev->Next = temp;
                }
                prev = temp;
                temp = temp->Next;
            }
        }
        Display();
    }

    void UpdateByIndex(int value, int index)
    {
        if(index == 0)
            root->Data = value;
        else
        {
            int i = 0;
            Node *temp = root;
            while (temp != NULL) {
                if(i == index - 1 && temp->Next != NULL)
                {
                    temp->Next->Data = value;
                    break;
                }
                i++;
                temp = temp->Next;
            }
        }
        Display();
    }

    void UpdateByValue(int oldValue,int newValue)
    {
        if(root->Data == oldValue)
            root->Data = newValue;
        Node *temp = root;
        while(temp != NULL)
        {
            if(temp->Next != NULL && temp->Next->Data == oldValue)
                temp->Next->Data = newValue;
            temp = temp->Next;
        }
        Display();
    }

    int CountNoOfItems()
    {
        int i = 0;
        Node *temp = root;
        while (temp != NULL) {
            i++;
            temp = temp->Next;
        }
        return i;
    }

    int SumOfItems()
    {
        int sum = 0;
        Node *temp = root;
        while(temp != NULL)
        {
            sum += temp->Data;
            temp = temp->Next;
        }
        return sum;
    }

    int MaximumOfItems()
    {
        int max = INT_MIN;
        Node *temp = root;
        while(temp != NULL)
        {
            if(max < temp->Data)
                max = temp->Data;
            temp = temp->Next;
        }
        return max;
    }

    int MinimumOfItems()
    {
        int min = INT_MAX;
        Node *temp = root;
        while (temp != NULL) {
            if(min > temp->Data)
                min = temp->Data;
            temp = temp->Next;
        }
        return min;
    }

    int SearchIndexByValue(int value)
    {
        int i = 0;
        Node *temp = root;
        while (temp != NULL) {
            if(temp->Data == value)
                return i;
            i++;
            temp = temp->Next;
        }
        return -1;
    }

    bool IsSorted()
    {
        int val = INT_MIN;
        Node *temp = root;
        while(temp != NULL)
        {
            if(val > temp->Data)
                return false;
            val = temp->Data;
            temp = temp->Next;
        }
        return true;
    }

    //https://www.techiedelight.com/remove-duplicates-linked-list/
    void RemoveDuplicates()
    {
        unordered_set<int> set;
        Node *prev = nullptr, *temp = root;
        while (temp != NULL) {
            if(set.find(temp->Data) != set.end())
            {
                prev->Next = temp->Next;
                delete temp;
            }
            else
            {
                set.insert(temp->Data);
                prev = temp;
            }
            temp = temp->Next;
        }
        Display();
    }

    void ReverseByAuxiliary()
    {
        vector<int> vec;
        Node *temp = root;
        while (temp != NULL) {
            vec.push_back(temp->Data);
            temp = temp->Next;
        }
        //root->Data = vec[0];
        temp = root;
        vector<int>::reverse_iterator ritr;
        for (ritr = vec.rbegin(); ritr != vec.rend(); ritr++) {
            //cout << *ritr << " ";
            temp->Data = *ritr;
            temp = temp->Next;
        }
        Display();
    }
    
    void ReverseBySliding()
    {
        Node *previous = nullptr, *reverse = nullptr, *current = root;
        while (current != NULL) {
            previous = reverse;
            reverse = current;
            current = current->Next;
            reverse->Next = previous;
        }
        root = reverse;
        Display();
    }
    
    void ReverseByRecurrence(Node *q, Node *p)
    {
        if(p != NULL)
        {
            ReverseByRecurrence(p, p->Next);
            p->Next = q;
            if(q == NULL)
                Display();
        }
        else
            root = q;
    }
    
    void ConcatTwo(Node *first, Node *second)
    {
        Node *temp = first;
        while (temp != nullptr) {
            if(temp->Next == nullptr)
            {   temp->Next = second;
                break;
            }
            temp = temp->Next;
        }
        Display();
    }
    
    void MergeTwo(Node *first, Node *second)
    {
        Node *temp = nullptr;
        if(first->Data < second->Data){
            temp = new Node(first->Data);
            first = first->Next;
        }
        else{
            temp = new Node(second->Data);
            second = second->Next;
        }
        Node *temp1 = temp;
        while (first != nullptr && second != nullptr) {
            if(first->Data < second->Data)
            {
                //cout << first->Data << " ";
                temp1->Next = first;
                temp1 = temp1->Next;
                first = first->Next;
            }
            else
            {
                //cout << second->Data << " ";
                temp1->Next = second;
                temp1 = temp1->Next;
                second = second->Next;
            }
        }
        while (first != nullptr) {
            //cout << first->Data << " ";
            temp1->Next = first;
            temp1 = temp1->Next;
            first = first->Next;
        }
        while (second != nullptr) {
            //cout << second->Data << " ";
            temp1->Next = second;
            temp1 = temp1->Next;
            second = second->Next;
        }
        //cout << endl;
        Display(temp);
    }

    bool IsLooped(Node *list)
    {
        Node *temp = list;
        while (temp != NULL) {
            if(temp->Next == list)
                return true;
            temp = temp->Next;
        }
        return false;
    }
    
    int AddTwoLLWithoutExtraSpace(Node *list1, Node *list2)
    {
        int list1Val = 0, list2Val = 0;
        int m = 10;
        while (list1 != NULL || list2 != NULL) {
            if(list1 != NULL)
            {
                list1Val *= m;
                list1Val += list1->Data;
                list1 = list1->Next;
            }
            if(list2 != NULL)
            {
                list2Val *= m;
                list2Val += list2->Data;
                list2 = list2->Next;
            }
        }
        return list1Val+list2Val;
    }

    ~SinglyLinkedList()
    {
        Node *p = root;
        while(root)
        {
            root = root->Next;
            delete p;
            p = root;
        }
    }
};

int main()
{
    SinglyLinkedList linkedList;
    Array arr(8);
    arr.Arr = new int[] {2,3,4,5,6,7,8,9};
    cout << "01. Create Singly linked list                      : " << endl; linkedList.root = linkedList.Create(arr);
    cout << "02. Display Singly linked list                     : "; linkedList.Display();
    cout << "03. Insert Singly linked list                      : "; linkedList.Insert(3, 3);linkedList.Display();
    cout << "04. Delete by Index in Singly linked list          : "; linkedList.DeleteByIndex(8);
    cout << "05. Delete by Value in Singly linked list          : "; linkedList.DeleteByValue(4);
    cout << "06. Update by Index in Singly linked list          : "; linkedList.UpdateByIndex(12,4);
    cout << "07. Update by Value in Singly linked list          : "; linkedList.UpdateByValue(3,10);
    cout << "08. Count # of items in Singly linked list         : " << linkedList.CountNoOfItems() << endl;
    cout << "09. Sum # of items in Singly linked list           : " << linkedList.SumOfItems() << endl;
    cout << "10. Maximum value of the Singly linked list        : " << linkedList.MaximumOfItems() << endl;
    cout << "11. Minimum value of the Singly linked list        : " << linkedList.MinimumOfItems() << endl;
    cout << "12. Search val found in Singly linked list at      : " << linkedList.SearchIndexByValue(12) << endl;
    cout << "13. It's a sorted Singly linked list               : " << linkedList.IsSorted() << endl;
    cout << "14. Remove duplicates in Singly linked list        : "; linkedList.Insert(5, 4);linkedList.RemoveDuplicates();
    cout << "15. Auxiliary Reverse in Singly linked list        : "; linkedList.ReverseByAuxiliary();
    cout << "16. Sliding ptr reverse in Singly linked list      : "; linkedList.ReverseBySliding();
    cout << "17. Recurrence reverse the Singly linked list      : "; linkedList.ReverseByRecurrence(nullptr, linkedList.root);
    Array newLL(8,new int[] {22,33,34,35,36,73,48,49});
    cout << "17. Recurrence reverse the Singly linked list      : "; linkedList.ConcatTwo(linkedList.root,  linkedList.Create(newLL));
    Node *first = linkedList.Create(Array(4, new int[] { 1,3,5,7 }));
    Node *second = linkedList.Create(Array(4, new int[] { 2,4,6,8 }));
    cout << "18. Merging two Singly linked list                 : "; linkedList.MergeTwo(first, second);
    auto loopedNode = linkedList.CreateLooped(Array(7,new int[] { 1,4,5,6,7,8,9 }));
    cout << "19. Check is looped Singly linked list             : " << linkedList.IsLooped(loopedNode) << endl;
    Node *list1 = linkedList.Create(Array(4,new int[] { 5,7,3,4 }));
    Node *list2 = linkedList.Create(Array(3,new int[] { 9,4,6 }));
    cout << "20. Add two Singly linked list without extra space : " << linkedList.AddTwoLLWithoutExtraSpace(list1, list2) << endl;
}

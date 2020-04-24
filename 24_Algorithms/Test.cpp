#include <iostream>

using namespace std;

class Node
{
public:
    char C;
    Node *Next = NULL;
    Node(char c)
    {
        C = c;
    }
};

int main()
{
    Node *n = new Node('(');
    Node *t = n;
    n = n->Next;
    delete t;
    if(n == NULL)
        cout << "NULL" << endl;
    
}

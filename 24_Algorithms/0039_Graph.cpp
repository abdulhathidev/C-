#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
    Node(){}
    Node(int val)
    {
        this->val = val;
    }
};

struct Edge
{
    int src, dest;
};

class Graph
{
public:
    //No of vertex
    int N;
    Node **AdjacencyList;
    
    Graph(Edge edges[], int noOfVertex,int noOfEdges)
    {
        AdjacencyList = new Node*[noOfVertex];
        for (int i = 0; i < noOfVertex; i++) {
            AdjacencyList[i] = nullptr;
        }
        for (int j = 0; j < noOfEdges; j++) {
            int src = edges[j].src;
            int dest = edges[j].dest;
            Node *node = new Node(dest);
            if(AdjacencyList[src] == nullptr)
            {
                AdjacencyList[src] = new Node(src);
            }
            node->next = AdjacencyList[src]->next;
            AdjacencyList[src]->next = node;
        }
    }
};

void main_Graph()
{
    cout << "Graph" << endl;
    
    Edge edges[] =
    {
        {0,1},{1,2},{2,0},{2,1},{3,2},{4,5},{5,4}
    };
    
    //number of vertices in the graph
    int N = 6;
    
    int n = sizeof(edges)/sizeof(edges[0]);
    
    cout << N << endl;
    cout << n << endl;
    cout << sizeof(edges) << endl;
    cout << sizeof(edges[0]) << endl;
    
    Graph g(edges,N,n);
    
    for (int j = 0; j < N; j++) {
        Node *node = g.AdjacencyList[j];
        while (node != nullptr) {
            cout << node->val << "->";
            node = node->next;
        }
        cout << endl;
    }
}

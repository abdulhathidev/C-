#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
};

struct Edge
{
    int src, dest;
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
    
   
}

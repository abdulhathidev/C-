#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct Edge
{
    int source, destination;
};

class GraphBySTL
{
public:
    //construct a vector
    vector<vector<int>> adjList;
    GraphBySTL(vector<Edge> const &edges, int n)
    {
        adjList.resize(n);
        for(auto &edge: edges)
        {
            adjList[edge.source].push_back(edge.destination);
        }
    }
    void PrintGraph(int n)
    {
        for (int i = 0; i < n; i++) {
            cout << i << "--> ";
            for(int v: adjList[i])
                cout << v << " ";
            cout << endl;
        }
    }
    void BFS_Iterative(int v, vector<bool> &discovered)
    {
        queue<int> que;
        discovered[v] = true;
        que.push(v);
        while (!que.empty())
        {
            v = que.front();
            que.pop();
            cout << v << " ";
            
            for(int u: adjList[v])
            {
                if (discovered[u] == false) {
                    discovered[u] = true;
                    que.push(u);
                }
            }
        }
    }
    void BFS_Recursive(queue<int> &q, vector<bool> &discovered)
    {
        if(q.empty())
            return;
        int val = q.front();
        q.pop();
        cout << val << " ";
        
        for(int x: adjList[val])
        {
            if(!discovered[x])
            {
                //cout << x << " ";
                discovered[x] = true;
                q.push(x);
            }
        }
        BFS_Recursive(q, discovered);
    }

    void DFS_Recursive(int v, vector<bool> &discovered)
    {
        discovered[v] = true;
        cout << v << " ";
        for(int u: adjList[v])
        {
            if(!discovered[u])
                DFS_Recursive(u, discovered);
        }
    }
    
    void DFS_Iterative(vector<bool> &discovered)
    {
        stack<int> st;
        int i = 1;
        bool allNodesVisited = true;
        //Visit
        cout << i << " ";
        discovered[i] = true;
        st.push(i);
        
        //explore
        while (!st.empty()) {
            allNodesVisited = true;
            if(adjList[i].capacity() <= 0)
            {
                i = st.top();
                st.pop();
            }
            for(int j: adjList[i])
            {
                if(!discovered[j])
                {
                    discovered[j] = true;
                    allNodesVisited = false;
                    cout << j << " ";
                    st.push(i);
                    i = j;
                    break;
                }
            }
            if(allNodesVisited)
            {
                i = st.top();
                st.pop();
            }
        }
    }
};

void main_GraphBySTL()
{
    vector<Edge> edges = {
        //{1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},{5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}
        {1, 2}, {1, 7}, {1, 8}, {2, 3}, {2, 6}, {3, 4}, {3, 5}, {8, 9}, {8, 12}, {9, 10}, {9, 11}
    };
    int noOfVertex = 13;
    GraphBySTL graph(edges, noOfVertex);
    cout << "Print Graph" << endl;
    graph.PrintGraph(noOfVertex);
    cout << endl;
    
    vector<bool> discovered(noOfVertex, false);
    cout << "Breadth First Search Iterative" << endl;
    graph.BFS_Iterative(1, discovered);
    cout << endl;
    
    vector<bool> discovered1(noOfVertex, false);
    queue<int> que;
    que.push(1);
    discovered1[1] = true;
    cout << endl;
    
    cout << endl;
    cout << "Breadth First Search Recursive" << endl;
    graph.BFS_Recursive(que, discovered1);
    cout << endl;
    
    cout << endl;
    cout << "Depth First Search Recursive" << endl;
    vector<bool> discovered2(noOfVertex, false);
    graph.DFS_Recursive(1,discovered2);
    cout << endl;
    
    cout << endl;
    cout << "Depth First Search Iterative" << endl;
    vector<bool> discovered3(noOfVertex, false);
    graph.DFS_Iterative(discovered3);
    cout << endl;
    
    cout << endl;
}

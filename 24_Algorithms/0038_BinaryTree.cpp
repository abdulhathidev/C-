#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = nullptr;
    return node;
}

void levelOrderDisplay(Node* root)
{
    if(root == nullptr)
        return;
    queue<Node*> que;
    que.push(root);
    
    Node* currentNode = nullptr;
    
    while (!que.empty()) {
        currentNode = que.front();
        que.pop();
        cout << currentNode->data << " ";
        if(currentNode->left != nullptr)
            que.push(currentNode->left);
        
        if(currentNode->right != nullptr)
            que.push(currentNode->right);
    }
    cout << endl;
}

void main_BinaryTree()
{
    Node* root = nullptr;
    
       /* Construct below tree
                   1
                 /   \
               /       \
             2           3
           /   \       /   \
          4     5     6     7
         / \   / \   / \   / \
        8   9 10 11 12 13 14 15
   */
    
    root = newNode(1);
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);

    root->right = newNode(3);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->left = newNode(12);
    root->right->left->right = newNode(13);
    root->right->right->left = newNode(14);
    root->right->right->right = newNode(15);
    
    levelOrderDisplay(root);
}

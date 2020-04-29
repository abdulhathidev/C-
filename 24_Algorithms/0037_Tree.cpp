#include <iostream>
#include "0037_Tree.h"

using namespace std;

class Tree
{
public:
    TreeNode *root = NULL;
    
    void Create()
    {
        TreeQueue queue;
        TreeNode *temp;
        int x = -1;
        if(root == NULL)
        {
            cout << "Enter root value : ";
            root = new TreeNode();
            cin >> root->data;
            queue.Enqueue(root);
        }
        while (!queue.IsEmpty()) {
            temp = queue.Dequeue();
            cout << "Please enter the left child of " << temp->data <<" : ";
            cin >> x;
            if(x > -1)
            {
                temp->left = new TreeNode(x);
                queue.Enqueue(temp->left);
            }
            cout << "Please enter the right child of " << temp->data <<" : ";
            cin >> x;
            if(x > -1)
            {
                temp->right = new TreeNode(x);
                queue.Enqueue(temp->right);
            }
        }
    }

    void PreOrderDisplay(TreeNode *node)
    {
        if(node)
        {
            cout << node->data << "->";
            PreOrderDisplay(node->left);
            PreOrderDisplay(node->right);
        }
        //cout << endl;
    }

    void InOrderDisplay(TreeNode *node)
    {
        if(node)
        {
            InOrderDisplay(node->left);
            cout << node->data << "->";
            InOrderDisplay(node->right);
        }
        //cout << endl;
    }
    
    void PostOrderDisplay(TreeNode *node)
    {
        if(node)
        {
            PostOrderDisplay(node->left);
            PostOrderDisplay(node->right);
            cout << node->data << "->";
        }
    }

    void LevelOrderDisplay(TreeNode *node)
    {
        TreeQueue treeQueue;
        treeQueue.Enqueue(node);
        cout << node->data << "->";
        while (!treeQueue.IsEmpty()) {
            auto temp = treeQueue.Dequeue();
            if(temp->left != NULL)
            {
                treeQueue.Enqueue(temp->left);
                cout << temp->left->data << "->";
            }
            if(temp->right != NULL)
            {
                treeQueue.Enqueue(temp->right);
                cout << temp->right->data << "->";
            }
        }
    }

    int Height(TreeNode *node)
    {
        if(node == NULL)
            return 0;
        return 1 + max(Height(node->left),Height(node->right));
    }
};

void main_Tree()
{
    Tree tree;
    tree.root = new TreeNode(4);
    tree.root->left = new TreeNode(2);
    tree.root->right = new TreeNode(6);
    tree.root->left->left = new TreeNode(1);
    tree.root->left->right = new TreeNode(3);
    tree.root->right->left = new TreeNode(5);
    tree.root->right->right = new TreeNode(7);
    tree.root->right->right->right = new TreeNode(9);
    tree.root->right->right->right->right = new TreeNode(11);
    //tree.Create();
    tree.PreOrderDisplay(tree.root); cout << endl;
    tree.InOrderDisplay(tree.root); cout << endl;
    tree.PostOrderDisplay(tree.root); cout << endl;
    tree.LevelOrderDisplay(tree.root); cout << endl;
    cout << "Height of the Tree : " << tree.Height(tree.root) << endl;
}

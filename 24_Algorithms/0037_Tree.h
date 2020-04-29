#ifndef Tree_h
#define Tree_h

class TreeNode
{
public:
    TreeNode *left = NULL;
    int data;
    TreeNode *right = NULL;
    TreeNode(){}
    TreeNode(int data)
    {
        this->data = data;
    }
};
class TreeQueueNode
{
public:
    TreeNode *data = NULL;
    TreeQueueNode *next = NULL;
    TreeQueueNode(TreeNode *node)
    {
        this->data = node;
    }
};

class TreeQueue
{
private:
    TreeQueueNode *first = NULL;
    TreeQueueNode *last = NULL;
public:
    void Enqueue(TreeNode *node)
    {
        if(IsEmpty())
        {
            first = new TreeQueueNode(node);
            last = first;
        }
        else
        {
            last->next = new TreeQueueNode(node);
            last = last->next;
        }
    }
    
    TreeNode *Dequeue()
    {
        TreeNode *tempNode = NULL;
        if(first != NULL)
        {
            TreeQueueNode *temp = first;
            tempNode = temp->data;
            first = first->next;
            delete temp;
        }
        return tempNode;
    }
    bool IsEmpty()
    {
        return first == NULL;
    }
};

#endif /* Tree_h */

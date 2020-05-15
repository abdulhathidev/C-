#include <iostream>
using namespace std;

void main_PointerTest();
void main_queuebyarray();
void main_QueueByArrayAndResetPointer();
void main_CircularQueue();
void main_QueueByLinkedList();
void main_Tree();
void main_BinaryTree();
void main_Graph();
void main_GraphBySTL();

void SizeOfDataType()
{
    cout << "int            : " << sizeof(int) << endl;
    cout << "bool           : " << sizeof(bool) << endl;
    cout << "long           : " << sizeof(long) << endl;
    cout << "float          : " << sizeof(float) << endl;
    cout << "double         : " << sizeof(double) << endl;
    cout << "long long      : " << sizeof(long int) << endl;
    cout << "unsigned int   : " << sizeof(unsigned int) << endl;
    cout << "unsigned long  : " << sizeof(unsigned int) << endl;
    cout << "char           : " << sizeof(char) << endl;
}

int main()
{
    //main_PointerTest();
    
    //main_queuebyarray();
    //main_QueueByArrayAndResetPointer();
    //main_CircularQueue();
    //main_QueueByLinkedList();
    //main_Tree();
    //main_BinaryTree();
    //main_Graph();
    main_GraphBySTL();
}

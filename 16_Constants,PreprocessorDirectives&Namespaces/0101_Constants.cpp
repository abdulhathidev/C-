#include <iostream>

using namespace std;

// 1. Constant intiger
void ConstantInt()
{
    const int x = 10;
    //x++;
    cout << x << endl;
}

// 2. Assign integer to Constant integer Pointer
void PointerToIntConstant()
{
    int x = 10;
    const int *ptr = &x;
    //++*ptr;
    cout << x << endl;
}

// 3. Constant pointer
void ConstantPointer()
{
    int x = 10;
    int const *ptr = &x;
    x++;
    cout << x << endl;
    int y = 20;
    ptr = &y;
    //++(*ptr);
    cout << *ptr << endl;
}

//3. Pointer constant
void PointerConstant()
{
    int x = 10;
    int *const ptr = &x;
    int y = 20;
    //ptr = &y;
    ++(*ptr);
    cout << *ptr << endl;
}

// 4. Constant pointer to int constant

void ConstPtrToIntConst()
{
    int x = 10;
    const int *const ptr = &x;
    int y = 20;
    //ptr = &y;
    //++(*ptr);
    cout << *ptr << endl;
}

int main()
{
    ConstantInt();
    PointerToIntConstant();
    ConstantPointer();
    PointerConstant();
    ConstPtrToIntConst();
}
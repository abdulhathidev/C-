#include <iostream>
using namespace std;

void main_PointerTest()
{
/* Pointers */
    cout << "Pointer Quick recap" << endl;
    cout << "-------------------" << endl;
   //Data Variable declaration and intialization
   int x = 10;
   //Address Variable or Pointer declaration
   int *p;
   
   //Assigning varable address to the pointer
   p = &x;
   
   //Printing data variable and pointer addressess and values.
   
   cout << "Value of the data variable X    : " << x << endl;  // Value of the data variable
   cout << "Address of the data variable &X : " << &x << endl;  // Address of the data variable
   cout << "Value of the Pointer P          : " << p << endl;   // Address of the pointer pointing to the data variable
   cout << "Address of the Pointer P        : " << &p << endl;  // Address of the pointer
   cout << "De refrencing Pointer P         : " << *p << endl;  // Dereferencing pointe or Value of the pointer pointing to the data variable
    
    cout << endl;
    cout << "Dynamic memory allocation in Heap " << endl;
    cout << "----------------------------------" << endl;
    int *p1 = new int[5];
    p1[0] = 1; p1[1] = 2; p1[2] = 3; p1[3] = 4; p1[4] = 5;
    cout << &p1[0] << " " << p1[0] << endl;
    cout << &p1[1] << " " << p1[1] << endl;
    cout << *++p1 << endl;
    
    int **Arr = new int*[5];
    Arr[0] = new int[2];
    Arr[0][0] = 11;
    
    cout << Arr[0][0] << endl;
}

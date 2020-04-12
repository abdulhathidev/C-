#include <iostream>

using namespace std;

int StaticVarFun(int n)
{
    static int x = 0;
    if(n > 0)
    {
        x++;
        //cout<< (n-1) + x << endl;
        return StaticVarFun(n-1) + x;
    }
    return n;
}

int y = 0;
int GlobalVarFun(int n)
{
    if(n > 0)
    {
        y++;
        return GlobalVarFun(n-1) + y;
    }
    return n;
}

int main()
{
    cout << "Static variable function testing 1" << endl;
    cout << StaticVarFun(5) << endl;
    
    cout << "Static variable function testing 2" << endl;
    cout << StaticVarFun(5) << endl;
    
    cout << "Global variable function testing 1" << endl;
    cout << GlobalVarFun(5) << endl;
    
    cout << "Global variable function testing 1" << endl;
    cout << GlobalVarFun(5) << endl;
}

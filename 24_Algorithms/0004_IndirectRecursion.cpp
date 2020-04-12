#include <iostream>

using namespace std;

void funB(int n);

void funA(int n)
{
    if(n > 0)
    {
        cout << "FunA : " << n << endl;
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout << "FunB : " << n << endl;
        funA(n/2);
    }
}

int main()
{
    funA(11);
}

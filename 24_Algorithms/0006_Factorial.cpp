#include <iostream>

using namespace std;

void FactorialByLoop(int n)
{
    int sum = 1;
    for(int i = n;i>0;i--)
    {
        sum *= n;
        n -= 1;
    }
    cout << "Factorial sum by loop : " << sum <<endl;
}
int FactorialByRecursion(int n)
{
    if(n <= 0)
        return 1;
    return FactorialByRecursion(n-1)*n;
}

int main()
{
    FactorialByLoop(5);
    int sum = FactorialByRecursion(5);
    cout << "Factorial sum by recursion : " << sum << endl;
}

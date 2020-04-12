#include <iostream>
using namespace std;

void SumOfNNaturalNumsByLoop(int n)
{
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    cout << "Sum of N Natural Nums by loop : "<< sum <<endl;
}

int SumOfNNaturalNumsByRecursion(int n)
{
    if(n > 0)
        return SumOfNNaturalNumsByRecursion(n-1) + n;
    else
        return 0;
}

int main()
{
    SumOfNNaturalNumsByLoop(10);
    
    int sum = SumOfNNaturalNumsByRecursion(10);
    cout << "Sum of N Natural Nums by recursion : "<< sum <<endl;
}

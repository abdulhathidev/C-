#include <iostream>

using namespace std;

int Factorial(int n)
{
    int sum = 1;
    for(;n>1;n--)
        sum *= n;
    return sum;
}
int NCRByFormula(int n, int r)
{
    int nFact = Factorial(n);
    int rFact = Factorial(r);
    int nMinus1Fact = Factorial(n-r);
    
    return nFact/(rFact*nMinus1Fact);
}

int NCRByPascalTriangle(int n,int r)
{
    if(r == 0 || n == r)
        return 1;
    return NCRByPascalTriangle(n-1, r-1) + NCRByPascalTriangle(n-1, r);
}

int main()
{
    cout << "Factorial result : " << Factorial(4) << endl;
    cout << "NCR by formula   : " << NCRByFormula(4,2) << endl;
}

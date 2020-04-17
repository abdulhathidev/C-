#include <iostream>
using namespace std;

int LoopTylorSeriesByHornersRule(int x, int n)
{
    int result = 1;
    for(;n>0;n--)
        result = (1+x/n)*result;
    return result;
}

int RecursiveTylorSeriesByHR(int x, int n)
{
    if(n<=0)
        return 1;
    return RecursiveTylorSeriesByHR(x, n-1)*(1+x/n);
}

int main()
{
    cout << "For loop Tylor series by horners rule  : " << LoopTylorSeriesByHornersRule(2, 2) << endl;
    cout << "Recursive Tylor series by horners rule : " << RecursiveTylorSeriesByHR(2, 2) << endl;
}

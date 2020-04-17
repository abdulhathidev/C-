#include <iostream>

using namespace std;

double TylorSeries(int x,int n)
{
    static double pow = 1, fact = 1;
    double result;
    if(n <= 0)
        return 1;
    result = TylorSeries(x, n-1);
    pow = pow * x;
    fact = fact * n;
    return result + pow/fact;
}

int main()
{
    cout << "Tylor Series : " << TylorSeries(2, 2) << endl;
    cout << "Tylor Series : " << TylorSeries(1, 10) << endl;
}

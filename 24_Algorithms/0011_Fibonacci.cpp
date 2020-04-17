#include <iostream>

using namespace std;

int FibonacciByLoop(int n)
{
    if(n<=1) return n;
    int t0=0,t1=1,sum=0;
    for (int i = 2; i <= n; i++) {
        sum = t0+t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int FibByRecurrence(int n)
{
    //cout << n << endl;
    if(n<=1) return n;
    return FibByRecurrence(n-2)+FibByRecurrence(n-1);
}

int fib[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int FibByRecurrenceMemoization(int n)
{
    if(n<=1)
    {
        fib[n] = n;
        return n;
    }
    else {
        if(fib[n-2] == -1) fib[n-2] = FibByRecurrenceMemoization(n-2);
        if(fib[n-1] == -1) fib[n-1] = FibByRecurrenceMemoization(n-1);
    }
    return fib[n-2]+fib[n-1];
}

int main()
{
    
    cout << "Fibonacci By loop : " << FibonacciByLoop(10) << endl;
    cout << "Fibonacci By recurrence : " << FibByRecurrence(10) << endl;
    cout << "Fibonacci By recurrence with Memoization : " << FibByRecurrenceMemoization(10) << endl;
}

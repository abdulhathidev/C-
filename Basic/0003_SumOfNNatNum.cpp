/*
    formula : n*(n+1)/2
*/
#include <iostream>
using namespace std;

void FindSumOfFirstNNaturalNumbers()
{
    cout << "Enter the N Natural number : ";
    int n;
    float sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum of N Natural number of 5 is : " << sum << endl;
}

int main()
{
    FindSumOfFirstNNaturalNumbers();
    return 1;
}

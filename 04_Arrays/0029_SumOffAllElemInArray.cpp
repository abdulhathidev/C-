#include <iostream>

using namespace std;

int main()
{
    int A[10] = {3, 4, 5, 2, 3, 4, 5, 6, 4, 7};
    int sum = 0;
    for (int x : A)
        sum += x;
    cout << "Sum : " << sum << endl;
    return 0;
}
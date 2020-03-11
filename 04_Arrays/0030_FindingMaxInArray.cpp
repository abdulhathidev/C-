#include <iostream>

using namespace std;

int main()
{
    int A[10] = {3, 4, 5, 2, 3, 4, 5, 6, 4, 7};
    int max = A[0];
    for (int i = 1; i < 10; i++)
        if (max < A[i])
            max = A[i];
    cout << "Max : " << max << endl;
    return 0;
}
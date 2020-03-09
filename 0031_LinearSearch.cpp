#include <iostream>

using namespace std;

int main()
{
    int A[10] = {3, 4, 5, 2, 1, 7, 8, 9, 11, 12};
    cout << "Enter the numer to linear search : ";
    int n;
    cin >> n;
    for (int x; x < 10; x++)
        if (A[x] == n)
        {
            cout << "The index of the linear search number is : " << x << endl;
            return 1;
        }
    cout << "The number not found" << endl;
    return 1;
}
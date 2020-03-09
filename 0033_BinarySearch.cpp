#include <iostream>

using namespace std;

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 7, 8, 9, 11, 12};
    cout << "Enter the numer to linear search : ";
    int key, low = 0, high = 9;
    cin >> key;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
        {
            cout << "Key found at index : " << mid << endl;
            return 1;
        }
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Key not found" << endl;
    return 1;
}
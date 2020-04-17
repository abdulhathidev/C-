#include <iostream>
using namespace std;

class Array
{
    
};

int root[8];

void Create()
{
    for (int i=0; i<8; i++) {
        root[i] = i + 2;
    }
}

void Display()
{
    for (int i=0; i<8; i++) {
        cout << root[i] << " ";
    }
    cout<<endl;
}

void LinearSearch(int n)
{
    for (int i = 0; i<8; i++) {
        if(root[i] == n){
            cout << "Value "<< n <<" found at the index " << i << endl;
            return;
        }
    }
    cout << "Value "<< n <<" not found" << endl;
}

void BinarySearch(int n)
{
    int left = 0, right = 8, mid;
    while (left <= right) {
        mid = (left + right)/2;
        if(root[mid] == n)
        {
            cout << "Value "<< n <<" found at the index " << mid << endl;
            return;
        }
        else if(n < root[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << "Value "<< n <<" not found" << endl;
}

void BinarySearch_Recursive(int n,int left,int right)
{
    if (left <= right) {
        int mid = (left+right)/2;
        if(root[mid] == n)
        {
            cout << "Value "<< n <<" found at the index " << mid << endl;
                return;
        }
        else if(n < root[mid])
            BinarySearch_Recursive(n, left, mid-1);
        else
            BinarySearch_Recursive(n, mid+1, right);
    }
    else
        cout << "Value "<< n <<" not found" << endl;
}

void Swap(int &x,int &y)
{
    int t = x;
    x = y;
    y = t;
}

void ReverseAnArray()
{
    for(int i=0,j=7;i<j;i++,j--)
    {
        Swap(root[i], root[j]);
    }
}

int IsSorted()
{
    for (int i = 0; i<7; i++) {
        if(root[i] > root[i+1])
        {
            cout << "No. This array is not sorted "<<endl;
            return 0;
        }
    }
    cout << "Yes. This is the sorted array"<<endl;
    return 1;
}
void MergeArray(int arr1[], int arr2[])
{
    
}

int main()
{
    cout << "Array Data structure" << endl << "-------------------------------" << endl;
    cout << "1. Craate an Array " << endl; Create();
    cout << "2. Display an Array                            : "; Display();
    cout << "3. Linear search in array value 8              : "; LinearSearch(8);
    cout << "4. Binary search in array value 8              : "; BinarySearch(8);
    cout << "5. Recursive Binary search in array value 8    : "; BinarySearch_Recursive(8, 0, 8);
    cout << "6. Reverse an Array                            : "; ReverseAnArray();Display();
    cout << "7. This array is sorted ?                      : "; ReverseAnArray();IsSorted();
}

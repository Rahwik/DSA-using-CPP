//Check if array is Sorted
#include<iostream>
using namespace std;

// Naive method
bool isSorted(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                return false;
            }
        }
    }
    return true;
}

// Efficient Approach
bool isSortedEfficient(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    // Using the naive method
    if(isSorted(arr, size))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;

    // Using the efficient approach
    if(isSortedEfficient(arr, size))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;

    return 0;
}

#include <iostream>

using namespace std;

//Counting Sort
void countsort(int arr[], int n, int k)
{
    int count[k];
    for(int i=0; i<k; i++)
    {
        count[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }
    int index = 0;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            arr[index]=i;
            index++;
        }
    }
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 9;

    cout << "Original array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    countsort(arr, n, k);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
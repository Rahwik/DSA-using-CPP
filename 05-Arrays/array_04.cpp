//Second Largest Elelemt
//Efficient Approach
#include<iostream>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int res = -1;
    int largest = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 4, 2, 7, 3};

    int secondLargestIndex = SecondLargest(arr, size);

    if(secondLargestIndex != -1)
        cout << "Second largest element is: " << arr[secondLargestIndex] << endl;
    else
        cout << "Array does not have a second largest element." << endl;

    return 0;
}

<<<<<<< HEAD
//Second Largest Elelemt
//Naive Approach
#include<iostream>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int result = -1;

    for(int i = 0; i <= n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(result == -1)
                result = i;
            else if(arr[i] > arr[result])
                result = i;
        }
    }
    return result;
}

int getLargest(int arr[], int n)
{
    int largestIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[largestIndex])
            largestIndex = i;
    }
    return largestIndex;
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
=======
//Second Largest Elelemt
//Naive Approach
#include<iostream>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int result = -1;

    for(int i = 0; i <= n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(result == -1)
                result = i;
            else if(arr[i] > arr[result])
                result = i;
        }
    }
    return result;
}

int getLargest(int arr[], int n)
{
    int largestIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[largestIndex])
            largestIndex = i;
    }
    return largestIndex;
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
>>>>>>> origin/main

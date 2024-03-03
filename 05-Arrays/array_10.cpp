//Maximu=m Duifference problem with order
//maximum value of arr[j]=arr[i], such that j>i
#include<iostream>
using namespace std;

// Naive Method
int maxdifference(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

// Efficient Method
int maxDifference(int arr[], int n)
{
    int res = arr[1] - arr[0], minval = arr[0];
    for(int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minval);
        minval = min(minval, arr[j]);
    }
    return res;
}

int main()
{
    // Example usage
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Difference (Naive Method): " << maxdifference(arr, n) << endl;
    cout << "Maximum Difference (Efficient Method): " << maxDifference(arr, n) << endl;

    return 0;
}


/*
I/P=arr[]={2,3,10,6,4,8,1}
O/P=8

I/P={7,9,5,6,3,2}
O/P=2
*/
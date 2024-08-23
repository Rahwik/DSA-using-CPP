// K-th Smallest Element
#include <iostream>
using namespace std;
// Naive Solution
int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
// optimized Solution
int kthSmallest(int arr[], int n, int k)
{
    while (l <= r)
    {
        int p = partition(arr, l, r); // lomuto
        if (p == k - 1)
        {
            return p;
        }
        else if (p < k - 1)
        {
            r = p - 1;
        }
        else
        {
            l = p + 1;
        }
    }
    return -1;
}
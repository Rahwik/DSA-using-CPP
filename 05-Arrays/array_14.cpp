<<<<<<< HEAD
//maximum Sum of Subarray
#include<iostream>
using namespace std;

// Function to find the maximum sum of a subarray - O(n^2) approach
int MaxSum(int arr[], int n)
{
    int res = arr[0];
    for(int i = 0; i < n; i++)
    {
        int curr = 0;
        for(int j = i; j < n; j++)
        {
            curr = curr + arr[j]; // Change arr[i] to arr[j]
            res = max(res, curr);
        }
    }
    return res;
}

// Function to find the maximum sum of a subarray - O(n) approach
int MaxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    // Example usage
    int arr1[] = {1, -2, 3, -1, 2};
    int arr2[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Maximum Sum (O(n^2) approach): " << MaxSum(arr1, n1) << endl;
    cout << "Maximum Sum (O(n) approach): " << MaxSum(arr2, n2) << endl;

    return 0;
}
=======
//maximum Sum of Subarray
#include<iostream>
using namespace std;

// Function to find the maximum sum of a subarray - O(n^2) approach
int MaxSum(int arr[], int n)
{
    int res = arr[0];
    for(int i = 0; i < n; i++)
    {
        int curr = 0;
        for(int j = i; j < n; j++)
        {
            curr = curr + arr[j]; // Change arr[i] to arr[j]
            res = max(res, curr);
        }
    }
    return res;
}

// Function to find the maximum sum of a subarray - O(n) approach
int MaxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    // Example usage
    int arr1[] = {1, -2, 3, -1, 2};
    int arr2[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Maximum Sum (O(n^2) approach): " << MaxSum(arr1, n1) << endl;
    cout << "Maximum Sum (O(n) approach): " << MaxSum(arr2, n2) << endl;

    return 0;
}
>>>>>>> origin/main

<<<<<<< HEAD
//Trapping rain water
#include<iostream>
using namespace std;

// Function to calculate trapped rainwater - O(n^2) approach
int getWater(int arr[], int n)
{
    int res = 0;
    for(int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for(int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for(int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        res += (min(lmax, rmax) - arr[i]);
    }
    return res;
}

// Function to calculate trapped rainwater - O(n) approach
int getWaterOptimized(int arr[], int n)
{
    int res = 0;
    int lmax[n], rmax[n];

    lmax[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }

    rmax[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for(int i = 1; i < n - 1; i++)
    {
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main() {
    // Example usage
    int arr[] = {3, 0, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Trapped Rainwater (O(n^2) approach): " << getWater(arr, n) << endl;
    cout << "Trapped Rainwater (O(n) approach): " << getWaterOptimized(arr, n) << endl;

    return 0;
}
=======
//Trapping rain water
#include<iostream>
using namespace std;

// Function to calculate trapped rainwater - O(n^2) approach
int getWater(int arr[], int n)
{
    int res = 0;
    for(int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for(int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for(int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        res += (min(lmax, rmax) - arr[i]);
    }
    return res;
}

// Function to calculate trapped rainwater - O(n) approach
int getWaterOptimized(int arr[], int n)
{
    int res = 0;
    int lmax[n], rmax[n];

    lmax[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }

    rmax[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for(int i = 1; i < n - 1; i++)
    {
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main() {
    // Example usage
    int arr[] = {3, 0, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Trapped Rainwater (O(n^2) approach): " << getWater(arr, n) << endl;
    cout << "Trapped Rainwater (O(n) approach): " << getWaterOptimized(arr, n) << endl;

    return 0;
}
>>>>>>> origin/main

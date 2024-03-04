//Maximum Consecutive 1's in a binary Array
#include<iostream>
using namespace std;

// Function to find the maximum consecutive 1's in a binary array - O(n^2) approach
int maxConsecutiveOne(bool arr[], int n)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int curr = 0;
        for(int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

// Function to find the maximum consecutive 1's in a binary array - O(n) approach
int maxConsecutiveOne(bool arr[], int n)
{
    int res = 0;
    int curr = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main() {
    // Example usage
    bool arr1[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    bool arr2[] = {1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Maximum Consecutive 1's (O(n^2) approach): " << maxConsecutiveOne(arr1, n1) << endl;
    cout << "Maximum Consecutive 1's (O(n) approach): " << maxConsecutiveOne(arr2, n2) << endl;

    return 0;
}

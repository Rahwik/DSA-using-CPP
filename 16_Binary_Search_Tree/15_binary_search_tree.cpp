// Ceiling on left side
#include <iostream>
#include <climits>
#include<set>
using namespace std;

// Naive approach
void printceil(int arr[], int n)
{
    cout << -1 << endl;
    for (int i = 1; i < n; i++)
    {
        int diff = INT_MAX;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
            {
                diff = min(diff, arr[j] - arr[i]);
            }
        }
        if (diff == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[i] + diff << endl;
        }
    }
}

// Efficient solution
void printCeil(int arr[], int n)
{
    cout << -1 << endl;
    set<int> s;
    s.insert(arr[0]);

    for (int i = 1; i < n; i++)
    {
        auto it = s.lower_bound(arr[i]);
        if (it != s.end())
        {
            cout << *it << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        s.insert(arr[i]);
    }
}

int main()
{
    int arr[] = {10, 5, 11, 10, 20, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    printCeil(arr, n);
    printceil(arr, n);
    return 0;
}
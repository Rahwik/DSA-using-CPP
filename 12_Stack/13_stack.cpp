//Largest rectangular area in a histogram
#include<iostream>
#include<stack>
using namespace std;

//naive solution
int getmaxarea(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

int main() {
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum area is " << getmaxarea(arr, n);
    return 0;
}
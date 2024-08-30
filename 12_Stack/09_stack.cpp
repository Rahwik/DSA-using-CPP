//Stock Span Problem
#include<iostream>
#include<stack>

using namespace std;

void printspan(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int span = 1;
        for(int j=i-1; j>=0 && arr[j] <= arr[i]; j--)
        {
            span++;
        }
        cout << span << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 4, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printspan(arr, n);

    return 0;
}
// Next Greater Elelemnts
#include <iostream>
#include<stack>

using namespace std;

// naive solution
void nextGreater(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << " ";
                break;
            }
        }
        if (j == n)
        {
            cout << -1 << " ";
        }
    }
}

//Efficient solution
void nextGreater(int arr[], int n) {
    stack<int> s;
    s.push(arr[n-1]);
    for (int i = n-2; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        cout << (s.empty() ? -1 : s.top()) << " ";
        s.push(arr[i]);
    }
}
int main() {
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Next Greater Elements (Naive Solution): ";
    nextGreater(arr, n);
    cout << endl;

    cout << "Next Greater Elements (Efficient Solution): ";
    nextGreaterEfficient(arr, n);
    cout << endl;

    return 0;
}
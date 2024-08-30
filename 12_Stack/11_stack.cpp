// Previous greater element
#include <iostream>
#include <stack>

using namespace std;

// Naive solution
void printprevgreater(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << " ";
                break;
            }
        }
        if (j == -1)
        {
            cout << -1 << " ";
        }
    }
}

// Efficient Solution
void printprevGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && s.top() < arr[i])
        {
            s.pop();
        }
        int pg = (s.empty()) ? -1 : s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {3, 10, 4, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Previous greater elements using Naive solution: ";
    printprevgreater(arr, n);
    cout << endl;

    cout << "Previous greater elements using Efficient solution: ";
    printprevGreater(arr, n);
    cout << endl;

    return 0;
}

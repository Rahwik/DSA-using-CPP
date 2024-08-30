//Stock Span Problem
#include<iostream>
#include<stack>

using namespace std;

//Efficient Solution
void printspan(int arr[], int n)
{
    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for(int i = 1; i < n; i++)    
    {
        while(!s.empty() && arr[s.top()] <= arr[i])
            s.pop();
        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " "; 
        s.push(i);
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
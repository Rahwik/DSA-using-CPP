//Largest rectangular area in a histogram
#include<iostream>
#include<stack>
using namespace std;

//Efficient solution
int getmaxarea(int arr[], int n)
{
    stack<int>s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&&arr[s.top()]>=arr[i])
        {
            int top=s.top();
            s.pop();
            int curr=arr[top]*(s.empty()?i:(i-top-1));
            res=max(res,curr);
        }
        s.push(i);
    }
    while(!s.empty())
    {
        int top=s.top();
        s.pop();
        int curr=arr[top]*(s.empty()?n:(n-top-1));
        res=max(res,curr);
    }
    return res;
}

int main() {
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum area is " << getmaxarea(arr, n);
    return 0;
}
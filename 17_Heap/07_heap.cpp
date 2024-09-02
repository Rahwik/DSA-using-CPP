//Sort K-Sorted Array
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

void sortk(int arr[],int n,int k)
{
    priority_queue<int, vector<int>, less<int>>pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    int index = 0; 
    for(int i=k;i<n;i++) 
    {
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty())
    {
        arr[index++]=pq.top();
        pq.pop();
    }
}
int main() {
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    sortk(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
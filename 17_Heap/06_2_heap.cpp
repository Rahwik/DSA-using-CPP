#include<iostream>
#include <vector>
#include<queue>

using namespace std;

int main()
{
    int arr[]={10,5,15};
    priority_queue<int>pq(arr,arr+3);
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
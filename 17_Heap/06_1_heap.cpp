#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    priority_queue<int , vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
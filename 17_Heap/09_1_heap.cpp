// K Largest Elements
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> kLargestElements(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    //Build a min heap of first k elements
    for (int num : arr)
    {
        if(minHeap.size() < k)
            minHeap.push(num);
        //compare  current element with top of heap. if smaller tahn top, ignore it.  
        //else remove the top elelment and isert the current element in the min heap  
        else if(num > minHeap.top())
        {
            minHeap.pop();
            minHeap.push(num);
        }
    }
    vector<int> result;
    while(!minHeap.empty())
    {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    return result;
}

int main()
{
    vector<int> arr = {12, 5, 8, 10, 15, 3};
    int k = 3;
    vector<int> result = kLargestElements(arr, k);
    //print the content of min heap
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    return 0;
}
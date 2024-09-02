// K Largest Elements
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> kLargestElements(vector<int> &arr, int k)
{
    priority_queue<int> maxHeap;
    for (int num : arr)
    {
        maxHeap.push(num);
    }
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return result;
}

int main()
{

    vector<int> arr = {12, 5, 8, 10, 15, 3};
    int k = 3;
    vector<int> result = kLargestElements(arr, k);
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}

//But Maximum items wirh given sum
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    int count = 0;
    while (!pq.empty() && sum >= pq.top()) {
        sum -= pq.top();
        pq.pop();
        count++;
    }
    cout << count << endl;
    return 0;
}
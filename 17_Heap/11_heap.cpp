// Merge K Sorted Arrays
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
        vector<int> result;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;

        for (int i = 0; i < arrays.size(); i++) {
            if (!arrays[i].empty()) {
                minHeap.push({arrays[i][0], {i, 0}});
            }
        }

        while (!minHeap.empty()) {
            auto top = minHeap.top();
            minHeap.pop();
            result.push_back(top.first);

            if (top.second.second + 1 < arrays[top.second.first].size()) {
                minHeap.push({arrays[top.second.first][top.second.second + 1], {top.second.first, top.second.second + 1}});
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> arrays = {{1, 3, 5}, {2, 4, 6}, {0, 7, 8}};
    vector<int> result = solution.mergeKSortedArrays(arrays);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;  

    return 0;
}
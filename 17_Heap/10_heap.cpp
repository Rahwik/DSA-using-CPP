// K Closest Elements
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

//NAive Solution
void printKC(int arr[], int n, int k, int x) {
    bool visited[n] = {false};
    for (int i = 0; i < k; i++) {
        int min_diff = INT_MAX;
        int min_diff_idx;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && abs(arr[j] - x) <= min_diff) {
                min_diff = abs(arr[j] - x);
                min_diff_idx = j;
            }
        }
        cout << arr[min_diff_idx] << " ";
        visited[min_diff_idx] = true;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int x = 2;
    printKC(arr, n, k, x);
    return 0;
}
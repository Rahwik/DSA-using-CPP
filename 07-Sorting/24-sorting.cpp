//Bucket Sort
#include <iostream>
#include <vector>
using namespace std;

void bucketSort(float arr[], int n) {
    // Find the maximum value in the array
    float maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Create empty buckets
    vector<float> buckets[n];
    float interval = maxVal / n;

    // Fill the buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = floor(arr[i] / interval);
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort each bucket individually
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Join the buckets
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
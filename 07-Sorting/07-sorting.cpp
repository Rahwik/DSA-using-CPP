// Count Inversions in an array
#include<iostream>
using namespace std;

// Naive approach
int countInversion(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                res++;
            }
        }
    }
    return res;
}

// Efficient approach
int countAndMerge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l, res = 0;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
            res += n1 - i;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;
}

int countInversionEfficient(int arr[], int l, int r) {
    int res = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        res += countInversionEfficient(arr, l, m);
        res += countInversionEfficient(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int main() {
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of inversions using naive approach: " << countInversion(arr, n) << endl;
    cout << "Number of inversions using efficient approach: " << countInversionEfficient(arr, 0, n - 1) << endl;
    return 0;
}
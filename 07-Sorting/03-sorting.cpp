// Selection sort
#include<iostream>
using namespace std;

const int INF = INT_MAX;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Naive method
void selectionSortNaive(int arr[], int n) {
    int temp[n];
    for(int i=0; i<n; i++) {
        int min_ind = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        temp[i] = arr[min_ind];
        arr[min_ind] = INF;
    }
    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }
}

// In-place implementation
void selectionSortInPlace(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int min_ind = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Driver code
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    selectionSortInPlace(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
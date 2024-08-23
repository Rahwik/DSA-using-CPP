//Heap Sort
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void maxheapify(int arr[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxheapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = (n - 2) / 2; i >= 0; i--) {
        maxheapify(arr, n, i);
    }
}

void heapsort(int arr[], int n) {
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--) {
        swap(arr[0], arr[i]);
        maxheapify(arr, i, 0);
    }
}

int main() {
    using namespace std;

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapsort(arr, n);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//Complete Binary Heap
#include<iostream>
using namespace std;

class MinHeap {
public:
    int* arr;
    int size;
    int capacity;

    MinHeap(int c) {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i) {
        return (2 * i + 1);
    }

    int right(int i) {
        return (2 * i + 2);
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    void swap(int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void minHeapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if (l < size && arr[l] < arr[smallest])
            smallest = l;

        if (r < size && arr[r] < arr[smallest])
            smallest = r;

        if (smallest != i) {
            swap(i, smallest);
            minHeapify(smallest);
        }
    }

    void buildMinHeap() {
        for (int i = size / 2 - 1; i >= 0; i--)
            minHeapify(i);
    }

    void printHeap() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h(11);
    h.size = 10;
    h.arr[0] = 10;
    h.arr[1] = 30;
    h.arr[2] = 15;
    h.arr[3] = 20;
    h.arr[4] = 7;
    h.arr[5] = 9;
    h.arr[6] = 8;
    h.arr[7] = 12;
    h.arr[8] = 6;
    h.arr[9] = 17;

    h.buildMinHeap();

    cout << "Heap elements: ";
    h.printHeap();

    return 0;
}
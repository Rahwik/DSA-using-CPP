// Heap Sort
#include <iostream>
using namespace std;

class MaxHeap
{
public:
    int *arr;
    int size;
    int capacity;

    MaxHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return (2 * i + 1);
    }

    int right(int i)
    {
        return (2 * i + 2);
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void swap(int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void maxHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int largest = i;

        if (l < size && arr[l] > arr[largest])
            largest = l;

        if (r < size && arr[r] > arr[largest])
            largest = r;

        if (largest != i)
        {
            swap(i, largest);
            maxHeapify(largest);
        }
    }

    void buildMaxHeap()
    {
        for (int i = size / 2 - 1; i >= 0; i--)
            maxHeapify(i);
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void heapsort()
    {
        buildMaxHeap();
        for (int i = size - 1; i > 0; i--)
        {
            swap(0, i);
            size--;
            maxHeapify(0);
        }
    }
};

int main()
{
    MaxHeap h(11);
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

    cout << "Original elements: ";
    h.printHeap();

    h.heapsort();

    cout << "Sorted elements: ";
    h.size = 10; // Reset the size to print all elements
    h.printHeap();

    return 0;
}
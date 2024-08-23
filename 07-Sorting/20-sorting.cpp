//Cycle Sort
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

//Cycle Sort
void CycleSortDistinct(int arr[], int n) {
    for(int cs = 0; cs < n - 1; cs++) {
        int item = arr[cs];
        int pos = cs;
        for(int i = cs + 1; i < n; i++) {
            if(arr[i] < item) {
                pos++;
            }
        }
        swap(item, arr[pos]);
        while(pos != cs) {
            pos = cs;
            for(int i = cs + 1; i < n; i++) {
                if(arr[i] < item) {
                    pos++;
                }
            }
            swap(item, arr[pos]);
        }
    }
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    CycleSortDistinct(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
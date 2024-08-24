//Implementation of open addressing 
#include <iostream>

using namespace std;

class Hash {
    int *arr;
    int n, m; // array of integers

public:
    Hash(int x) {
        n = x;
        m = 0;
        arr = new int[n]; // allocate memory for arr
        for (int i = 0; i < n; i++) {
            arr[i] = -1; // initialize all slots as empty
        }
    }

    void insert(int key) {
        int i = key % n;
        while (arr[i] != -1) { // if slot is not empty, probe next slot
            i = (i + 1) % n;
        }
        arr[i] = key;
    }

    void remove(int key) {
        int i = key % n;
        while (arr[i] != key) { // search for key
            i = (i + 1) % n;
            if (arr[i] == -1) { // if we reach an empty slot, key is not present
                cout << "Key not found" << endl;
                return;
            }
        }
        arr[i] = -1; // mark slot as empty
    }

    void search(int key) {
        int i = key % n;
        while (arr[i] != key) { // search for key
            i = (i + 1) % n;
            if (arr[i] == -1) { // if we reach an empty slot, key is not present
                cout << "Key not found" << endl;
                return;
            }
        }
        cout << "Key found" << endl;
    }
};

int main() {
    Hash h(10); // create a hash table with 10 buckets

    h.insert(5);
    h.insert(25);
    h.insert(15);
    h.insert(35);
    h.insert(95);

    h.search(5); // Key found
    h.search(20); // Key not found

    h.remove(5);
    h.search(5); // Key not found

    return 0;
}
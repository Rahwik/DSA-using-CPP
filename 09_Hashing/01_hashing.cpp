//Format of hashing in cpp
//Implementation of Chaining
#include <list>
#include <iostream>

using namespace std;

class myHash {
    int Bucket;
    list<int>* table; // array of linked lists

public:
    myHash(int b) {
        Bucket = b;
        table = new list<int>[Bucket];
    }

    void insert(int key) {
        int index = key % Bucket;
        table[index].push_back(key);
    }

    void remove(int key) {
        int index = key % Bucket;
        table[index].remove(key);
    }

    void search(int key) {
        int index = key % Bucket;
        if (table[index].empty()) {
            cout << "Key not found" << endl;
        } else {
            for (auto it = table[index].begin(); it != table[index].end(); it++) {
                if (*it == key) {
                    cout << "Key found" << endl;
                    return;
                }
            }
            cout << "Key not found" << endl;
        }
    }
};

int main() {
    myHash hashTable(10); // create a hash table with 10 buckets

    hashTable.insert(5);
    hashTable.insert(25);
    hashTable.insert(15);
    hashTable.insert(35);
    hashTable.insert(95);

    hashTable.search(5); // Key found
    hashTable.search(20); // Key not found

    hashTable.remove(5);
    hashTable.search(5); // Key not found

    return 0;
}
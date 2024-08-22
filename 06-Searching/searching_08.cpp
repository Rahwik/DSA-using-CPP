#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fibonacciSearch(const vector<char>& arr, char target) {
    int n = arr.size();

    int fibMMinus2 = 0;
    int fibMMinus1 = 1;
    int fibM = fibMMinus1 + fibMMinus2;

    while (fibM < n) {
        fibMMinus2 = fibMMinus1;
        fibMMinus1 = fibM;
        fibM = fibMMinus1 + fibMMinus2;
    }

    int offset = -1;

    while (fibM > 1) {
        int i = min(offset + fibMMinus2, n - 1);

        if (arr[i] < target) {
            fibM = fibMMinus1;
            fibMMinus1 = fibMMinus2;
            fibMMinus2 = fibM - fibMMinus1;
            offset = i;
        } else if (arr[i] > target) {
            fibM = fibMMinus2;
            fibMMinus1 = fibMMinus1 - fibMMinus2;
            fibMMinus2 = fibM - fibMMinus1;
        } else {
            return i;
        }
    }

    if (fibMMinus1 && arr[offset + 1] == target) {
        return offset + 1;
    }

    return -1; // Return -1 if not found
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    int resultIndex = fibonacciSearch(alphabet, target);

    if (resultIndex != -1) {
        cout << "Character found at index: " << resultIndex << endl;
        cout << "Character: " << alphabet[resultIndex] << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

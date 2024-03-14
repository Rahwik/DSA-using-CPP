#include <iostream>
#include <vector>

using namespace std;

char ternarySearch(const vector<char>& arr, char target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        if (arr[mid1] == target) {
            return arr[mid1];
        }

        if (arr[mid2] == target) {
            return arr[mid2];
        }

        if (target < arr[mid1]) {
            high = mid1 - 1;
        } else if (target > arr[mid2]) {
            low = mid2 + 1;
        } else {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }

    return '\0'; // Return null character if not found
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = ternarySearch(alphabet, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

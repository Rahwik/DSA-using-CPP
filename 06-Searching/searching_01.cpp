#include <iostream>
#include <vector>

using namespace std;

char binarySearch(const vector<char>& arr, char target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return arr[mid];
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return '\0'; // Return null character if not found
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = binarySearch(alphabet, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

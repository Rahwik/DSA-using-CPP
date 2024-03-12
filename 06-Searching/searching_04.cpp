#include <iostream>
#include <vector>

using namespace std;

char interpolationSearch(const vector<char>& arr, char target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            if (arr[low] == target) {
                return arr[low];
            }
            return '\0'; // Return null character if not found
        }

        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]);

        if (arr[pos] == target) {
            return arr[pos];
        } else if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return '\0'; // Return null character if not found
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = interpolationSearch(alphabet, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

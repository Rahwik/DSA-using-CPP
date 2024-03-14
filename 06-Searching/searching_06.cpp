#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char exponentialSearch(const vector<char>& arr, char target) {
    int n = arr.size();
    if (arr[0] == target) {
        return arr[0];
    }

    int i = 1;
    while (i < n && arr[i] <= target) {
        i *= 2;
    }

    return binary_search(arr.begin() + i / 2, arr.begin() + min(i, n), target) ? target : '\0';
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = exponentialSearch(alphabet, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

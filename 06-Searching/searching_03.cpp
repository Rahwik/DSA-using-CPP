#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

char jumpSearch(const vector<char>& arr, char target) {
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;

    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return '\0'; // Return null character if not found
        }
    }

    while (arr[prev] < target) {
        prev++;

        if (prev == min(step, n)) {
            return '\0'; // Return null character if not found
        }
    }

    if (arr[prev] == target) {
        return arr[prev];
    }

    return '\0'; // Return null character if not found
}

int main() {
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = jumpSearch(alphabet, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

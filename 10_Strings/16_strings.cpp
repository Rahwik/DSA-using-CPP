//Longest substring with distinct characters
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Longest substring with distinct characters
// Naive Method
bool areDistinct(string str, int i, int j) {
    vector<bool> visited(256);
    for (int k = i; k <= j; k++) {
        if (visited[str[k]] == true) {
            return false;
        }
        visited[str[k]] = true;
    }
    return true;
}

int longestDistinct(string str) {
    int n = str.length(), res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (areDistinct(str, i, j)) {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}

// Better Solution
int longestDistinct(string str) {
    int n = str.size(), res = 0;
    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);
        for (int j = i; j < n; j++) {
            if (visited[str[j]] == true) {
                break;
            } else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
    }
    return res;
}

// Efficient Solution
int longestDistinct(string str) {
    int n = str.length(), res = 0;
    vector<int> prev(256, -1);
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, prev[str[j]] + 1);
        res = max(res, j - i + 1);
        prev[str[j]] = j;
    }
    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Longest substring with distinct characters (Naive Method): " << longestDistinct(str) << endl;
    cout << "Longest substring with distinct characters (Better Solution): " << longestDistinct(str) << endl;
    cout << "Longest substring with distinct characters (Efficient Solution): " << longestDistinct(str) << endl;

    return 0;
}
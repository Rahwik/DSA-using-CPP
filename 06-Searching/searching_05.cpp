#include <iostream>
#include <unordered_map>

using namespace std;

char hashingSearch(const unordered_map<char, int>& hash_map, char target) {
    if (hash_map.find(target) != hash_map.end()) {
        return target;
    }
    return '\0'; // Return null character if not found
}

int main() {
    unordered_map<char, int> hash_map = {
        {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5},
        {'f', 6}, {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10},
        {'k', 11}, {'l', 12}, {'m', 13}, {'n', 14}, {'o', 15},
        {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19}, {'t', 20},
        {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25}, {'z', 26}
    };

    char target;
    cout << "Enter a character to search for: ";
    cin >> target;

    char result = hashingSearch(hash_map, target);

    if (result != '\0') {
        cout << "Character found: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }

    return 0;
}

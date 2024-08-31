//Operation in Set
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;

    // Insert elements into the set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    // Print the size of the set
    cout << "Size of the set: " << s.size() << endl;

    // Check if the set is empty
    if (s.empty()) {
        cout << "The set is empty." << endl;
    } else {
        cout << "The set is not empty." << endl;
    }

    // Find an element in the set
    if (s.find(30) != s.end()) {
        cout << "Element 30 found in the set." << endl;
    } else {
        cout << "Element 30 not found in the set." << endl;
    }

    // Erase an element from the set
    s.erase(20);

    // Print the set after erasing an element
    cout << "Set after erasing 20: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Clear the set
    s.clear();

    // Print the size of the set after clearing
    cout << "Size of the set after clearing: " << s.size() << endl;

    return 0;
}
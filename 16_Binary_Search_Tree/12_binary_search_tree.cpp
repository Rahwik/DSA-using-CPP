//Set in C++ STL
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>>s;
    s.insert(10);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(201);
    s.insert(54);
    s.insert(42);
    s.insert(443);
    s.insert(23);
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}
// Set in C++ STL

**What is a Set?**

* A set is an associative container that stores unique elements in a sorted order.
* It is a collection of unique objects, known as elements or members, that can be anything (e.g., integers, characters, strings, etc.).

**Types of Sets**

* **Ordered Set**: Elements are stored in a specific order, either ascending or descending.
* **Unordered Set**: Elements are stored in no particular order.

**Set Operations**

* **Insertion**: Adding a new element to the set.
* **Deletion**: Removing an existing element from the set.
* **Search**: Finding an element in the set.
* **Traversal**: Iterating over all elements in the set.

**Set Properties**

* **Uniqueness**: All elements in a set are unique.
* **Sorted Order**: Elements are stored in a sorted order (either ascending or descending).
* **No Duplicates**: No duplicate elements are allowed.

**Set Methods**

* `insert()`: Inserts a new element into the set.
* `erase()`: Removes an existing element from the set.
* `find()`: Searches for an element in the set.
* `begin()`: Returns an iterator pointing to the first element in the set.
* `end()`: Returns an iterator pointing to the end of the set.
* `size()`: Returns the number of elements in the set.
* `empty()`: Returns true if the set is empty, false otherwise.

**Set Iterators**

* **Iterator**: A pointer-like object that points to an element in the set.
* **Const Iterator**: A constant pointer-like object that points to an element in the set.

**Set Example**

```cpp
#include <iostream>
#include <set>

int main() {
    // Create an ordered set of integers
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(1);
    mySet.insert(5);
    mySet.insert(4);
    mySet.insert(201);
    mySet.insert(54);
    mySet.insert(42);
    mySet.insert(443);
    mySet.insert(23);

    // Print the set elements
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
```

**Common Use Cases**

* **Duplicate removal**: Use a set to remove duplicates from a collection of elements.
* **Sorted storage**: Use a set to store elements in a sorted order.
* **Fast lookup**: Use a set to quickly search for an element in a large collection.

**Time Complexity**

* **Insertion**: O(log n) on average, where n is the number of elements in the set.
* **Deletion**: O(log n) on average, where n is the number of elements in the set.
* **Search**: O(log n) on average, where n is the number of elements in the set.
* **Traversal**: O(n) in the worst case, where n is the number of elements in the set.

**Space Complexity**

* **Ordered Set**: O(n) in the worst case, where n is the number of elements in the set.
* **Unordered Set**: O(n) in the worst case, where n is the number of elements in the set.
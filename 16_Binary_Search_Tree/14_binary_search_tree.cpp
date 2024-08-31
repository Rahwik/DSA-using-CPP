//MAP in C++ STL
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    for(auto &x:m)
    {
        cout<<x.first<<" "<<x.second<<" ";
    }
    return 0;
}

// A map in C++ is a container that stores elements in the form of key-value pairs. It is a binary search tree-based data structure that allows for efficient insertion, deletion, and searching of elements.

// **Key Features of a Map:**

// *   **Key-Value Pairs:** Each element in a map is a pair of a unique key and a corresponding value.
// *   **Unique Keys:** No two elements in a map can have the same key.
// *   **Ordered Keys:** The keys in a map are always ordered, either in ascending or descending order.
// *   **Efficient Search:** Maps allow for efficient searching of elements based on their keys.

// **Visual Example:**

// Suppose we have a map of student names and their corresponding ages.

// | Key (Student Name) | Value (Age) |
// | --- | --- |
// | John | 20 |
// | Alice | 22 |
// | Bob | 21 |
// | Charlie | 19 |

// In this example, "John", "Alice", "Bob", and "Charlie" are the keys, and 20, 22, 21, and 19 are the corresponding values.

// **Operations on a Map:**

// *   **Insertion:** We can insert a new key-value pair into the map.
// *   **Deletion:** We can delete a key-value pair from the map based on the key.
// *   **Search:** We can search for a value in the map based on its key.

// **Example Use Cases:**

// *   **Student Database:** A map can be used to store student information, where the student's name is the key and the corresponding value is the student's age, grade, or other relevant information.
// *   **Phonebook:** A map can be used to store phone numbers, where the person's name is the key and the corresponding value is the phone number.
// *   **Dictionary:** A map can be used to store word definitions, where the word is the key and the corresponding value is the definition.

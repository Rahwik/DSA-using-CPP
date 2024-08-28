//vector implemenation in c++
#include <iostream>
#include <vector>
using namespace std;

class Mystack {
private:
    vector<int> v;

public:
    void push(int x) {
        v.push_back(x);
    }

    int pop() {
        if (v.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            throw runtime_error("Stack is empty");
        }
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek() {
        if (v.empty()) {
            cout << "Stack is empty." << endl;
            throw runtime_error("Stack is empty");
        }
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        return v.empty();
    }
};

int main() {
    Mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << std::endl;
    cout << s.peek() << std::endl;
    cout << s.isEmpty() << std::endl;
    return 0;
}
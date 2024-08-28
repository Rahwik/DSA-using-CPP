// Array implementation of Stack in C++
#include <iostream>
using namespace std;

class Mystack {
public:
    int *arr;
    int cap;
    int top;

    Mystack(int c) {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x) {
        if (top == cap - 1) {
            cout << "Stack is full. Cannot push " << x << endl;
            return;
        }
        ++top;
        arr[top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
        int res = arr[top];
        top--;
        return res;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
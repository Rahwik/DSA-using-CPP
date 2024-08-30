// K stacks in an array
#include<iostream>
#include<stack>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class KStacks {
public:
    int *arr, *top, *next;
    int k, freetop, cap;

    KStacks(int k1, int n) {
        k = k1;
        cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];

        for (int i = 0; i < k; i++) {
            top[i] = -1;
        }

        freetop = 0;
        for (int i = 0; i < cap - 1; i++) {
            next[i] = i + 1;
        }
        next[cap - 1] = -1;
    }

    // Function to push an element onto a stack
    void push(int stackNumber, int data) {
        if (freetop == -1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        int i = freetop;
        freetop = next[i];
        next[i] = top[stackNumber];
        top[stackNumber] = i;
        arr[i] = data;
    }

    // Function to pop an element from a stack
    int pop(int stackNumber) {
        if (top[stackNumber] == -1) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        int i = top[stackNumber];
        top[stackNumber] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
    }

    // Function to print the elements of a stack
    void printStack(int stackNumber) {
        int i = top[stackNumber];
        while (i != -1) {
            cout << arr[i] << " ";
            i = next[i];
        }
        cout << endl;
    }
};

int main() {
    KStacks ks(3, 10);
    ks.push(0, 10);
    ks.push(0, 20);
    ks.push(1, 30);
    ks.push(2, 40);
    ks.printStack(0);
    ks.printStack(1);
    ks.printStack(2);
    cout << ks.pop(0) << endl;
    ks.printStack(0);
    return 0;
}
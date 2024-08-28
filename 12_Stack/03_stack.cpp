// Linked list Implementation of stack
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class Stack {
public:
    Node* head;
    int size;
    Stack() : head(nullptr), size(0) {}

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty");
        }
        int res = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        return res;
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    int peek() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty");
        }
        return head->data;
    }

    ~Stack() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    cout << s.pop() << endl;
    return 0;
}
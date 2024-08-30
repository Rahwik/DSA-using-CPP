// Linked list implementation of Dequeue
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class Dequeue {
public:
    Node* front;
    Node* rear;
    int size;

    Dequeue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    ~Dequeue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    bool isFull() {
        return false; // Linked list can grow dynamically, so it's never full
    }

    bool isempty() {
        return (size == 0);
    }

    void deletefront() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        else
            front->prev = nullptr;
        delete temp;
        size--;
    }

    void insertrear(int x) {
        Node* newNode = new Node(x);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
    }

    void insertfront(int x) {
        Node* newNode = new Node(x);
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        size++;
    }

    void deleterear() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return;
        }
        Node* temp = rear;
        rear = rear->prev;
        if (rear == nullptr)
            front = nullptr;
        else
            rear->next = nullptr;
        delete temp;
        size--;
    }

    int getfront() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return -1;
        }
        return front->data;
    }

    int getrear() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return -1;
        }
        return rear->data;
    }
};

int main() {
    Dequeue dq;
    dq.insertrear(1);
    dq.insertrear(2);
    dq.insertfront(3);
    cout << dq.getfront() << endl;
    cout << dq.getrear() << endl;
    dq.deletefront();
    cout << dq.getfront() << endl;
    return 0;
}
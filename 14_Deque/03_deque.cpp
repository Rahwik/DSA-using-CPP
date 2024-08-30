// Array implementation of Dequeue
#include <iostream>
using namespace std;

class Dequeue {
public:
    int size, cap;
    int* arr;
    int front, rear;

    Dequeue(int c) {
        cap = c;
        size = 0;
        arr = new int[cap];
        front = -1;
        rear = -1;
    }

    ~Dequeue() {
        delete[] arr;
    }

    bool isFull() {
        return (size == cap);
    }

    bool isempty() {
        return (size == 0);
    }

    void deletefront() {
        if (front == -1) {
            cout << "Dequeue is empty\n";
            return;
        }
        if (front == cap - 1)
            front = 0;
        else
            front++;
        size--;
    }

    void insertrear(int x) {
        if (isFull()) {
            cout << "Dequeue is full\n";
            return;
        }
        if (rear == cap - 1)
            rear = 0;
        else
            rear++;
        if (front == -1)
            front = 0;
        arr[rear] = x;
        size++;
    }

    void insertfront(int x) {
        if (isFull()) {
            cout << "Dequeue is full\n";
            return;
        }
        if (front == 0)
            front = cap - 1;
        else
            front--;
        if (rear == -1)
            rear = 0;
        arr[front] = x;
        size++;
    }

    void deleterear() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return;
        }
        if (rear == 0)
            rear = cap - 1;
        else
            rear--;
        size--;
    }

    int getfront() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int getrear() {
        if (isempty()) {
            cout << "Dequeue is empty\n";
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    Dequeue dq(5);
    dq.insertrear(1);
    dq.insertrear(2);
    dq.insertfront(3);
    cout << dq.getfront() << endl;
    cout << dq.getrear() << endl;
    dq.deletefront();
    cout << dq.getfront() << endl;
    return 0;
}
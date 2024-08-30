// Improved Implementation
// Implementation of Queue using Array
#include <iostream>
#include <stdexcept>

using namespace std;

class Queue {
private:
    int *arr;
    int size, cap, front, rear;

public:
    Queue(int n) {
        if (n <= 0) {
            throw std::invalid_argument("Queue size must be a positive integer");
        }
        cap = n;
        arr = new int[cap];
        size = 0;
        front = 0;
        rear = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int x) {
        if (isfull()) {
            throw std::overflow_error("Queue is full");
        }
        arr[rear] = x;
        rear = (rear + 1) % cap;
        size++;
    }

    void dequeue() {
        if (isempty()) {
            throw std::underflow_error("Queue is empty");
        }
        front = (front + 1) % cap;
        size--;
    }

    int getfront() {
        if (isempty()) {
            throw std::underflow_error("Queue is empty");
        }
        return arr[front];
    }

    int getrear() {
        if (isempty()) {
            throw std::underflow_error("Queue is empty");
        }
        return arr[(rear - 1 + cap) % cap];
    }

    bool isfull() {
        return size == cap;
    }

    bool isempty() {
        return size == 0;
    }

    int queuesize() {
        return size;
    }
};

int main() {
    try {
        Queue q(5);
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);

        cout << "Queue size: " << q.queuesize() << endl;
        cout << "Front element: " << q.getfront() << endl;
        cout << "Rear element: " << q.getrear() << endl;

        q.dequeue();
        cout << "Queue size after dequeue: " << q.queuesize() << endl;
        cout << "Front element after dequeue: " << q.getfront() << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
//Efficient implementaion (Circular Array)
#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int front,cap,size;
    queue(int n)
    {
        cap=n;
        arr=new int[cap];
        front=0;
        size=0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }

    void enqueue(int x) {
        if(isFull()) {
            cout << "Queue is full. Cannot enqueue " << x << endl;
            return;
        }
        int rear = (front + size - 1) % cap;
        arr[rear] = x;
        size++;
    }

    int dequeue() {
        if(isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % cap;
        size--;
        return x;
    }

    void display() {
        for(int i = 0; i < size; i++) {
            int idx = (front + i) % cap;
            cout << arr[idx] << " ";
        }
        cout << endl;
    }
};

int main() {
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display(); 
    q.dequeue();
    q.display();
    q.enqueue(4);
    q.enqueue(5);
    q.display(); 
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
// Implementation of Queue using Array
#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int size, cap;

public:
    Queue(int n)
    {
        cap = n;
        arr = new int[cap];
        size = 0;
    }
    void enqueue(int x) {
        // implementation for enqueue 
    }
    void dequeue() {
        // implementation for dequeue 
    }
    int getfront() {
        // implementation for getfront 
    }
    int getrear() {
        // implementation for getrear 
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
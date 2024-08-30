// Linked list Implementation of Queue
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) 
    {
        data = x;
        next = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }
    void enqueue(int x) 
    {
        Node* temp = new Node(x);  
        if (front == nullptr)
        {
            front = rear = temp;  
        }
        else
        {
            rear->next = temp; 
            rear = temp;
        }
    }
    void dequeue() 
    {
        if (front == nullptr) return;
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
    }
};
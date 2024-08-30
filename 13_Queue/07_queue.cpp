//Implementation of stack using queue
#include<iostream>
#include<queue>

using namespace std;

class stack
{
    queue<int> q1,q2;
    int top()
    {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        return q1.front();
    }
    int size()
    {
        return q1.size();
    }
    int pop()
    {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        int temp = q1.front();
        q1.pop();
        return temp;
    }
    void push(int x)
    {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;

    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;

    cout << "Top element: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;

    return 0;
}
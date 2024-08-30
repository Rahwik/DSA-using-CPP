// Reversing a queue
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//Recursive Method
void reverse(queue<int>& q) {
    if(q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    reverse(q);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
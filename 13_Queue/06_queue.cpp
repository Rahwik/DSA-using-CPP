//Queue in C++ in STL
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
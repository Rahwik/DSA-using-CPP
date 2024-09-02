// Median of a Stream
#include<iostream>
#include<queue>
using namespace std;

void printM(int arr[], int n) {
    priority_queue<int> s; 
    priority_queue<int, vector<int>, greater<int>> g;

    s.push(arr[0]);
    cout << arr[0] << endl;

    for (int i = 1; i < n; i++) {
        int x = arr[i];

        if (s.size() > g.size()) {
            if (s.top() > x) {
                s.push(x);
            } else {
                g.push(x);
                if (g.size() > s.size()) {
                    s.push(g.top());
                    g.pop();
                }
            }
        } else {
            if (x <= s.top()) {
                s.push(x);
            } else {
                g.push(x);
            }
        }

        if (s.size() == g.size()) {
            cout << (s.top() + g.top()) / 2.0 << endl;
        } else {
            cout << s.top() << endl;
        }
    }
}
int main() {
    int arr[] = {12, 15, -10, 0, 10, 13, 5, 23, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    printM(arr, n);
    return 0;
}
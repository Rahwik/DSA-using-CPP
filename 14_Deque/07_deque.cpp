//First Circular tour
#include <iostream>
#include <deque>

using namespace std;

void tour(int a[], int b[], int n) {
    deque<int> q;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] - b[i];
        q.push_back(i);
        while (!q.empty() && sum < 0) {
            int idx = q.front();
            sum -= a[idx] - b[idx];
            q.pop_front();
        }
    }
    if (q.empty()) {
        cout << "No circular tour possible" << endl;
    } else {
        cout << "First circular tour starts at station " << q.front() + 1 << endl;
    }
}
int main() {
    int a[] = {50, 10, 60, 100};
    int b[] = {10, 20, 30, 15};
    int n = sizeof(a) / sizeof(a[0]);
    tour(a, b, n);
    return 0;
}
// Two stacks in an array
#include <iostream>
#include <stack>

using namespace std;

class TwoStacks {
    int *arr, cap, top1, top2;
public:
    TwoStacks(int n) {
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        }
    }
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            exit(1);
        }
    }
    int pop2() {
        if (top2 < cap) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            exit(1);
        }
    }
};

int main() {
    TwoStacks ts(5);
    ts.push1(1);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    ts.push2(5);
    cout << ts.pop1() << endl;
    cout << ts.pop2() << endl; 
    return 0;
}

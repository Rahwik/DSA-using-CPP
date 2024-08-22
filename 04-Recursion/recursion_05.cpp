#include<iostream>
using namespace std;

void print(int val) {
    cout << val << " ";
}

// Tail recursion with decreasing order print
void fun(int n) {
    if (n == 0)
        return;
    print(n);
    fun(n - 1);
}

// Tail recursion with increasing order print
void fun1(int n) {
    if (n == 0)
        return;
    fun1(n - 1);
    print(n);
}

// Tail recursion with an additional parameter for printing
void fun(int n, int k) {
    if (n == 0)
        return;
    print(k);
    fun(n - 1, k + 1);
}

// Tail recursion for calculating factorial
int fact(int n, int k = 1) {
    if (n == 0 || n == 1)
        return k;
    return fact(n - 1, k * n);
}

int main() {
    // Test the functions
    cout << "fun(5): ";
    fun(5);
    cout << endl;

    cout << "fun1(5): ";
    fun1(5);
    cout << endl;

    cout << "fun(5, 1): ";
    fun(5, 1);
    cout << endl;

    cout << "fact(5): " << fact(5) << endl;

    return 0;
}

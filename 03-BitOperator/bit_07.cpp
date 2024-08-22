<<<<<<< HEAD
// Count Set bits
#include <iostream>
using namespace std;

// Naive Solution
int CountSize(int n)
{
    int res = 0;
    while (n > 0)
    {
        //     if(n%21=0)
        //     {
        //         res++;
        //     }
        //     n=n/2;
        // Another way to implememnt it is:
        if ((n & 1) == 1) // also can be written as: res= res+ (n&1);
        {
            res++;
        }
        n = n >> 1;
    }
    return res;
}

// Brian Kerningam's Algorithm
/*
n=40
binary representation:
intial:00......0101000
after first iteration: 00......0100000
after second iteration: 00......0000000
It iterates until all bits are zero.
*/
int countSize(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}


int main() {

    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result1 = countSize(n);
    cout << "Number of set bits: " << result1 << endl;
    int result2 = CountSize(n);
    cout << "Number of set bits: " << result2 << endl;

    return 0;
=======
// Count Set bits
#include <iostream>
using namespace std;

// Naive Solution
int CountSize(int n)
{
    int res = 0;
    while (n > 0)
    {
        //     if(n%21=0)
        //     {
        //         res++;
        //     }
        //     n=n/2;
        // Another way to implememnt it is:
        if ((n & 1) == 1) // also can be written as: res= res+ (n&1);
        {
            res++;
        }
        n = n >> 1;
    }
    return res;
}

// Brian Kerningam's Algorithm
/*
n=40
binary representation:
intial:00......0101000
after first iteration: 00......0100000
after second iteration: 00......0000000
It iterates until all bits are zero.
*/
int countSize(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}


int main() {

    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result1 = countSize(n);
    cout << "Number of set bits: " << result1 << endl;
    int result2 = CountSize(n);
    cout << "Number of set bits: " << result2 << endl;

    return 0;
>>>>>>> origin/main
}
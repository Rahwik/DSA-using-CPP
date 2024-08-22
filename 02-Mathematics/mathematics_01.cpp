<<<<<<< HEAD
// Finding Numbers of digits in a Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Iterative Solution:
int countDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

// Recursive Silution:
int countDigit1(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigit1(n / 10);
}

// Logarithmic Solution:
int countDigit2(long n)
{
    return floor(log(n) + 1);
}

int main()
{
    long n;
    int c1 = countDigit(n);
    int c2 = countDigit1(n);
    int c3 = countDigit2(n);
    cout << c1 << c2 << c3 << endl;
    return 0;
=======
// Finding Numbers of digits in a Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Iterative Solution:
int countDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

// Recursive Silution:
int countDigit1(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigit1(n / 10);
}

// Logarithmic Solution:
int countDigit2(long n)
{
    return floor(log(n) + 1);
}

int main()
{
    long n;
    int c1 = countDigit(n);
    int c2 = countDigit1(n);
    int c3 = countDigit2(n);
    cout << c1 << c2 << c3 << endl;
    return 0;
>>>>>>> origin/main
}
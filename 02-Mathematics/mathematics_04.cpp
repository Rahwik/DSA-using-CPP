// Tailing zeros in Factorial:
#include <iostream>
using namespace std;

// Naive solution:
int countZeros(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    int res = 0;
    while (fact % 10 == 0)
    {
        res++;
        fact = fact / 10;
    }
    return res;// Θ(n)
}

// Efficient Solution:
int countZeros1(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;// Θ(logn)
}

int main()
{
    int n;
    cin >> n;
    int t1 = countZeros(n);
    int t2 = countZeros1(n);
    cout << t1 << t2 << endl;
    return 0;
}

/*
-Efficient solution:

1x2x3x4x|5|6x7x8x9x|10|x11x12x13x14x15.................|25|.....

tailing zerom count = [n/5] + [n/25] + [n/125] + ..........

-Dry run of the efficiant solution:

n=251
res=0

1st iteration : i=5
res=res+50
=50

2nd iteration : i=25
res=res+10
=60

3rd iteration : i=125
res=res+2
=62

output:62
*/
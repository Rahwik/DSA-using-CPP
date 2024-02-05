// Analysis of common loops
#include <iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 1; i < n; i = i ++)//Θ(n)
    {
        // Some Θ(1) work
    }
        for (int i = 1; i < n; i = i * 2)//Θ(logn)
    {
        // Some Θ(1) work
    }
        for (int j = 1; j < 100; j = j ++)//Θ(1)
    {
        // Some Θ(1) work
    }
    return 0;
}

//   Θ(n) + Θ(logn) + Θ(1)
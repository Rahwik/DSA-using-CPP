// Analysis of Common loops
#include <iostream>
using namespace std;
int main()
{
    int n, c;
    for (int i = n; i > 0; i = i - c)
    {
        // Some Θ(1) work
    }
}
/*
*It wil run Θ(n/c)|| Ignore the constant Θ(n)
*let n=10
*c=2
(10 8 6 4 2)
*/
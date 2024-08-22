<<<<<<< HEAD
// Analysis of common loops
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, c;
    for (int i = 2; i < n; i = pow(i, c))
    {
        // Some Θ(1) work
    }
    return 0;
}

/*
Let c=2, n=32

2 , 2^2 , (2^2)^2 .......... 2^c^(k-1)

 2^c^(k-1) < n
 c^(k-1) < logn
 k-1 < loglogn
 k < loglogn +1

 Θ(loglogn)

=======
// Analysis of common loops
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, c;
    for (int i = 2; i < n; i = pow(i, c))
    {
        // Some Θ(1) work
    }
    return 0;
}

/*
Let c=2, n=32

2 , 2^2 , (2^2)^2 .......... 2^c^(k-1)

 2^c^(k-1) < n
 c^(k-1) < logn
 k-1 < loglogn
 k < loglogn +1

 Θ(loglogn)

>>>>>>> origin/main
*/
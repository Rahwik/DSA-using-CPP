<<<<<<< HEAD
// Greatest Common Divisor:
#include <iostream>
#include <math.h>
using namespace std;
// Naive solution:
int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
} // Θ(min(a,b))

/*
-Euclidean Algorithm:

*basic idea:
Let 'b' be smaller tha 'a' gcd(a,b) = gcd(a-b, b)

why?
Let 'g' be gcd of 'a' and 'b'
a=gx, b=gy and gcs(x,y=1)

(a-b) = g(x-y)

*/

// Optimized Implementation:
int gcdO(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a = 12;
    int b = 15;
    gcd(a, b);
    gcdO(a, b);

    return 0;
}
=======
// Greatest Common Divisor:
#include <iostream>
#include <math.h>
using namespace std;
// Naive solution:
int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
} // Θ(min(a,b))

/*
-Euclidean Algorithm:

*basic idea:
Let 'b' be smaller tha 'a' gcd(a,b) = gcd(a-b, b)

why?
Let 'g' be gcd of 'a' and 'b'
a=gx, b=gy and gcs(x,y=1)

(a-b) = g(x-y)

*/

// Optimized Implementation:
int gcdO(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a = 12;
    int b = 15;
    gcd(a, b);
    gcdO(a, b);

    return 0;
}
>>>>>>> origin/main

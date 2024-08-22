<<<<<<< HEAD
// Lowest Common Multiple
#include <iostream>
#include <math.h>
using namespace std;

// Naive Solution:
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

// Efficient Solution:
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / gcd(a, b);//O(log(min(a,b)))
}

int main()
{
    int a = 4, b = 6;
    int lcm1 = lcm(a, b);
    gcd(a, b);
    int lcm2 = LCM(a, b);
    cout << lcm1<< "  " << lcm2 << endl;
    return 0;
}

/*
Efficient implementation:
a=4 , b=6
gcd=2
lCM =(4*6)/2
=12
=======
// Lowest Common Multiple
#include <iostream>
#include <math.h>
using namespace std;

// Naive Solution:
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

// Efficient Solution:
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / gcd(a, b);//O(log(min(a,b)))
}

int main()
{
    int a = 4, b = 6;
    int lcm1 = lcm(a, b);
    gcd(a, b);
    int lcm2 = LCM(a, b);
    cout << lcm1<< "  " << lcm2 << endl;
    return 0;
}

/*
Efficient implementation:
a=4 , b=6
gcd=2
lCM =(4*6)/2
=12
>>>>>>> origin/main
*/
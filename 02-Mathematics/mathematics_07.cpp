<<<<<<< HEAD
// Check for prime:
#include <iostream>
using namespace std;

// Naive solution:
bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient implementation:
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true; // O(sqrt(n))
}

// More Efficient Solution: (for larger n)
bool IsPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 ==0|| n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i+=6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cout << "ennter the number to check for prime:" << endl;
    cin >> a;
    cout << "Using Naive Method: " << isprime(a) << endl;
    cout << "Using Efficient Method: " << isPrime(a) << endl;
    cout << "Using Most Efficient Method: " << IsPrime(a) << endl;
    return 0;
}

/*
Efficient method:
Idea: Divison always appears in pairs.
30: (1,30) , (2,15) , (3,10) , (5,6)
65: (1,65) , (5,13)
25: (1,25) , (5,5)
*/
/*
Most Efficicent method:
Idea: by cheching n%2==0 and n%3==0, we can save many iterations for large n.
=======
// Check for prime:
#include <iostream>
using namespace std;

// Naive solution:
bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient implementation:
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true; // O(sqrt(n))
}

// More Efficient Solution: (for larger n)
bool IsPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 ==0|| n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i+=6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cout << "ennter the number to check for prime:" << endl;
    cin >> a;
    cout << "Using Naive Method: " << isprime(a) << endl;
    cout << "Using Efficient Method: " << isPrime(a) << endl;
    cout << "Using Most Efficient Method: " << IsPrime(a) << endl;
    return 0;
}

/*
Efficient method:
Idea: Divison always appears in pairs.
30: (1,30) , (2,15) , (3,10) , (5,6)
65: (1,65) , (5,13)
25: (1,25) , (5,5)
*/
/*
Most Efficicent method:
Idea: by cheching n%2==0 and n%3==0, we can save many iterations for large n.
>>>>>>> origin/main
*/
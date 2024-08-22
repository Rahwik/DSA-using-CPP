<<<<<<< HEAD
////Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

// Naive Solution:
void printprime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
            cout << i << " " << endl;
        ;
    }
}
// Simple implementaion of Sieve
void SieveSimple(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " " << endl;
        }
    }
}
// optimized implementaion of Sieve
void SieveOptimized(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " " << endl;
        }
    }
}
// Shorter Implementaion of the optimized Sieve
void SieveOptimized2(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " using Naive Solution:" << endl;
    printprime(n);

    cout << "Prime numbers up to " << n << " using Simple Sieve:" << endl;
    SieveSimple(n);

    cout << "Prime numbers up to " << n << " using Simple Sieve:" << endl;
    SieveOptimized(n);

    cout << "Prime numbers up to " << n << " using Optimized Sieve:" << endl;
    SieveOptimized2(n);

    return 0;
}
=======
////Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

// Naive Solution:
void printprime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
            cout << i << " " << endl;
        ;
    }
}
// Simple implementaion of Sieve
void SieveSimple(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " " << endl;
        }
    }
}
// optimized implementaion of Sieve
void SieveOptimized(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " " << endl;
        }
    }
}
// Shorter Implementaion of the optimized Sieve
void SieveOptimized2(int n)
{
    vector<bool> isprime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j = j + 1)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " using Naive Solution:" << endl;
    printprime(n);

    cout << "Prime numbers up to " << n << " using Simple Sieve:" << endl;
    SieveSimple(n);

    cout << "Prime numbers up to " << n << " using Simple Sieve:" << endl;
    SieveOptimized(n);

    cout << "Prime numbers up to " << n << " using Optimized Sieve:" << endl;
    SieveOptimized2(n);

    return 0;
}
>>>>>>> origin/main

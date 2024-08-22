<<<<<<< HEAD
//Prime Divisors
#include<iostream>
using namespace std;

// Naive Solution 
void primeDivisor(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }
}

// Efficient Solution
void printDivisors(int n)
{
    int i;
    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            cout << i << endl;
        }
    }
    for(; i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout << (n / i) << endl;
        }
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime Divisors:\n";
    primeDivisor(number);

    cout << "All Divisors:\n";
    printDivisors(number);

    return 0;
}
=======
//Prime Divisors
#include<iostream>
using namespace std;

// Naive Solution 
void primeDivisor(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }
}

// Efficient Solution
void printDivisors(int n)
{
    int i;
    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            cout << i << endl;
        }
    }
    for(; i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout << (n / i) << endl;
        }
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime Divisors:\n";
    primeDivisor(number);

    cout << "All Divisors:\n";
    printDivisors(number);

    return 0;
}
>>>>>>> origin/main

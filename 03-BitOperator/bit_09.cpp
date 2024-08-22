<<<<<<< HEAD
//Power of Two
#include<iostream>
using namespace std;

// Method 1 (Naive):
bool isPow(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n = n / 2;
    }
    return true; 
}

// Method 2 (Efficient):
bool isPow2(int n)
{
    if (n == 0)
    {
        return false;
    }
    return ((n & (n - 1)) == 0);
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Method 1 (Naive): " << (isPow(number) ? "True" : "False") << endl;
    cout << "Method 2 (Efficient): " << (isPow2(number) ? "True" : "False") << endl;

    return 0;
}
=======
//Power of Two
#include<iostream>
using namespace std;

// Method 1 (Naive):
bool isPow(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n = n / 2;
    }
    return true; 
}

// Method 2 (Efficient):
bool isPow2(int n)
{
    if (n == 0)
    {
        return false;
    }
    return ((n & (n - 1)) == 0);
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Method 1 (Naive): " << (isPow(number) ? "True" : "False") << endl;
    cout << "Method 2 (Efficient): " << (isPow2(number) ? "True" : "False") << endl;

    return 0;
}
>>>>>>> origin/main

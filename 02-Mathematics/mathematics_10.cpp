<<<<<<< HEAD
// Computing Power(x,n)
#include <iostream>
using namespace std;

// Naive solution:
int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

// Efficient Solution:
int Power(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = Power(x, n / 2);
    if (n % 2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return x * temp * temp;
    }
}
int main()
{
    int x, n;
    cout << "enter the value of the base" << endl;
    cin >> x;
    cout << "\n enter the value of the power" << endl;
    cin >> n;

    int v = power(x, n);
    int v1 = Power(x, n);

    cout << "Using Naive Method: " << v << endl;
    cout << "Using Efficient Method: " << v1 << endl;
    return 0;
=======
// Computing Power(x,n)
#include <iostream>
using namespace std;

// Naive solution:
int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

// Efficient Solution:
int Power(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = Power(x, n / 2);
    if (n % 2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return x * temp * temp;
    }
}
int main()
{
    int x, n;
    cout << "enter the value of the base" << endl;
    cin >> x;
    cout << "\n enter the value of the power" << endl;
    cin >> n;

    int v = power(x, n);
    int v1 = Power(x, n);

    cout << "Using Naive Method: " << v << endl;
    cout << "Using Efficient Method: " << v1 << endl;
    return 0;
>>>>>>> origin/main
}
<<<<<<< HEAD
// Analysis of Recursion
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n <= 0)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "rxy" << endl;
    }
    fun(n - 2);
    fun(n / 3);
}

int main()
{
    fun(10);
    return 0;
}

/*
n>0
T(n) = T(n-2) + T(n/3) + Θ(n)

n<=0
T(n) = Θ(1)
=======
// Analysis of Recursion
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n <= 0)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "rxy" << endl;
    }
    fun(n - 2);
    fun(n / 3);
}

int main()
{
    fun(10);
    return 0;
}

/*
n>0
T(n) = T(n-2) + T(n/3) + Θ(n)

n<=0
T(n) = Θ(1)
>>>>>>> origin/main
*/
// Analysis of Recursion
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << "rxy" << endl;
    fun(n / 2);
    fun(n / 2);
}

int main()
{
    fun(10);
    return 0;
}

/*
n>0
T(n) = T(n/2) + T(n/2) + Θ(1)

n<=0
T(n) = Θ(1)
*/
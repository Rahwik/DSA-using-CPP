<<<<<<< HEAD
// Factorial od a NUmber:
#include <iostream>
using namespace std;
// Iterative implementation:
int facti(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;// preffered solution 
}
// Recursive implementation:
int factr(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factr(n - 1);//takes more time than iterative solution
}// T(n) = T(n-1) + Θ(1) time complexity
int main()
{
    int n;
    cin >> n;
    int fact1 = facti(n);
    int fact2 = factr(n);
    cout << fact1 << fact2 << endl;

    return 0;
=======
// Factorial od a NUmber:
#include <iostream>
using namespace std;
// Iterative implementation:
int facti(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;// preffered solution 
}
// Recursive implementation:
int factr(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factr(n - 1);//takes more time than iterative solution
}// T(n) = T(n-1) + Θ(1) time complexity
int main()
{
    int n;
    cin >> n;
    int fact1 = facti(n);
    int fact2 = factr(n);
    cout << fact1 << fact2 << endl;

    return 0;
>>>>>>> origin/main
}
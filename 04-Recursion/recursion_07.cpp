<<<<<<< HEAD
// Rope Cutting Problem
#include <iostream>
#include <algorithm>
using namespace std;
int maxcuts(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max({
        maxcuts(n - a, a, b, c),
        maxcuts(n - b, a, b, c),
        maxcuts(n - c, a, b, c),
    });

    if (res == -1)
        return -1;

    return res + 1;
}
int main()
{
    int n = -5, a = 2, b = 1, c = 6;

    cout << maxcuts(n, a, b, c) << endl;
    return 0;
}
=======
// Rope Cutting Problem
#include <iostream>
#include <algorithm>
using namespace std;
int maxcuts(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max({
        maxcuts(n - a, a, b, c),
        maxcuts(n - b, a, b, c),
        maxcuts(n - c, a, b, c),
    });

    if (res == -1)
        return -1;

    return res + 1;
}
int main()
{
    int n = -5, a = 2, b = 1, c = 6;

    cout << maxcuts(n, a, b, c) << endl;
    return 0;
}
>>>>>>> origin/main

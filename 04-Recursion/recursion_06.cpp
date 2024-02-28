// Sum of Digits
#include <iostream>
using namespace std;

int getsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return getsum(n / 10) + n % 10;
    }
}
int main()
{
    int n;
    cout << "Enter the enter to find sum of digits" << endl;
    cin >> n;
    int sum = getsum(n);
    cout << "Sum of Digits" << sum << endl;
    return 0;
}
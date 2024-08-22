// Check Kth bit is set or not
#include <iostream>
using namespace std;

// Method 1:(left Shift)
void KthBit(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
// Method 2:(Right Shift)

void Kthbit(int n, int k)
{
    if (((n >> (k - 1)) & 1) == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int n, k;
    cout << "enter the number to check" << endl;
    cin >> n;
    cout << "enter the bit to check for set or not" << endl;
    cin >> k;
    KthBit(n, k);
    Kthbit(n, k);
    return 0;
}
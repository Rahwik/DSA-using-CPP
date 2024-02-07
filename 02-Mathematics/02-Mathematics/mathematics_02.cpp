// Palindrome Number:
#include <iostream>
using namespace std;

bool ispal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev == n);
}
int main()
{
    int n;
    cout << "Enter the Number :" << endl;
    cin >> n;
    bool pal = ispal(n);
    cout << pal;
    return 0;
}

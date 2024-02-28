#include<iostream>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout << "move 1 from " << a << " to " << c << endl;
        return;
    }
    toh(n-1, a, c, b);
    cout << "move " << n << " from " << a << " to " << c << endl;
    toh(n-1, b, a, c);
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}

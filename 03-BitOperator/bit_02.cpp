// Left Shift Operators <<
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    int y = 4;
    int z = (x << y);
    cout << z << endl;
    return 0;
}
// Output:
/*
6
12
48
If we assume that the leading y bits are 0, then result of (x<<y) is equivalent to (x*(2^y))
*/
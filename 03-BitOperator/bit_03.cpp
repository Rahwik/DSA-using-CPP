<<<<<<< HEAD
// Right Shift Operators >>
#include <iostream>
using namespace std;
int main()
{
    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    int y = 4;
    int z = (x >> y);
    cout << z << endl;
    return 0;
}
//Output:
/*
16
8
2
x>>y is equivalent to floor of [x/2^y]
=======
// Right Shift Operators >>
#include <iostream>
using namespace std;
int main()
{
    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    int y = 4;
    int z = (x >> y);
    cout << z << endl;
    return 0;
}
//Output:
/*
16
8
2
x>>y is equivalent to floor of [x/2^y]
>>>>>>> origin/main
*/
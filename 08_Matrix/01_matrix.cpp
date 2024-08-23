// MultiDimensional Arrays in C++
#include <iostream>
using namespace std;
int main()
{
    int arr[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
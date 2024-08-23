// Double pointer
#include<iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **p;
    p = new int*[m];
    for(int i = 0; i < m; i++)
    {
        p[i] = new int[n]; 
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            p[i][j] = 10;
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}
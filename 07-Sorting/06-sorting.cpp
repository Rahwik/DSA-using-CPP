// Intersection of two sorted arrays
#include <iostream>
using namespace std;

// Naive approach
void intersection(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                if (a[i] == a[j])
                {
                    cout << a[i] << " ";
                    break;
                }
            }
        }
    }
}

// Efficient Approach
void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {1, 2, 2, 3, 4, 5};
    int b[] = {2, 2, 4, 6, 7, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    cout << "Intersection of two sorted arrays: ";
    intersection(a, b, m, n);

    return 0;
}
<<<<<<< HEAD
// Remove Duplicate from a Sorted Arrays
#include <iostream>
using namespace std;
//Naive Method
int remdups(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}
//Efficient Approach
int remove_dups(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = remdups(arr, n);

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


=======
// Remove Duplicate from a Sorted Arrays
#include <iostream>
using namespace std;
//Naive Method
int remdups(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}
//Efficient Approach
int remove_dups(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = remdups(arr, n);

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


>>>>>>> origin/main

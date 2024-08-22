<<<<<<< HEAD
//Left rotate an array by d places
#include<iostream>
using namespace std;

void leftrotateone(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftrotate(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++)
    {
        leftrotateone(arr, n);
    }
}

int main()
{
    // Example usage
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftrotate(arr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
=======
//Left rotate an array by d places
#include<iostream>
using namespace std;

void leftrotateone(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftrotate(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++)
    {
        leftrotateone(arr, n);
    }
}

int main()
{
    // Example usage
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftrotate(arr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
>>>>>>> origin/main

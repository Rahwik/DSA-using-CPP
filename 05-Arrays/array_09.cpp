<<<<<<< HEAD
//Leader in a array
#include<iostream>
using namespace std;

// Naive method
void leader(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << arr[i] << endl;
        }
    }
}

// Efficient approach
void Leader(int arr[], int n)
{
    int curr_ldr = arr[n - 1];
    cout << curr_ldr << endl;
    for(int i = n - 2; i >= 0; i--)
    {
        if(curr_ldr < arr[i])
        {
            curr_ldr = arr[i];
            cout << curr_ldr << endl;
        }
    }
}

int main()
{
    // Example usage
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Leaders (Naive Method): ";
    leader(arr, n);

    cout << "Leaders (Efficient Method): ";
    Leader(arr, n);

    return 0;
}
=======
//Leader in a array
#include<iostream>
using namespace std;

// Naive method
void leader(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << arr[i] << endl;
        }
    }
}

// Efficient approach
void Leader(int arr[], int n)
{
    int curr_ldr = arr[n - 1];
    cout << curr_ldr << endl;
    for(int i = n - 2; i >= 0; i--)
    {
        if(curr_ldr < arr[i])
        {
            curr_ldr = arr[i];
            cout << curr_ldr << endl;
        }
    }
}

int main()
{
    // Example usage
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Leaders (Naive Method): ";
    leader(arr, n);

    cout << "Leaders (Efficient Method): ";
    Leader(arr, n);

    return 0;
}
>>>>>>> origin/main

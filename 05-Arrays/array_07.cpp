<<<<<<< HEAD
//Moves zero to end
#include<iostream>
using namespace std;

// Naive Method:
void movetoend(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

// Efficient Approach
void endTozero(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    // Example usage
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    movetoend(arr, n);

    cout << "Array after moving zeros to the end (Naive Method): ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    endTozero(arr2, n);

    cout << "Array after moving zeros to the end (Efficient Method): ";
    for(int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
=======
//Moves zero to end
#include<iostream>
using namespace std;

// Naive Method:
void movetoend(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

// Efficient Approach
void endTozero(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    // Example usage
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    movetoend(arr, n);

    cout << "Array after moving zeros to the end (Naive Method): ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    endTozero(arr2, n);

    cout << "Array after moving zeros to the end (Efficient Method): ";
    for(int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
>>>>>>> origin/main

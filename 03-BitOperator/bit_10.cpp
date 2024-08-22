<<<<<<< HEAD
// Find the only odd occuring numbers:
#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

void findOddOccurring(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << "The only odd occurring number is: " << arr[i] << endl;
            return; // Found the odd occurring number, exit the function
        }
    }
    cout << "No odd occurring number found." << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calling Efficient Solution
    int result = findOdd(arr, n);
    cout << "Method 1: The only odd occurring number is: " << result << endl;

    // Calling Naive Solution
    findOddOccurring(arr, n);

    return 0;
}
=======
// Find the only odd occuring numbers:
#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

void findOddOccurring(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << "The only odd occurring number is: " << arr[i] << endl;
            return; // Found the odd occurring number, exit the function
        }
    }
    cout << "No odd occurring number found." << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calling Efficient Solution
    int result = findOdd(arr, n);
    cout << "Method 1: The only odd occurring number is: " << result << endl;

    // Calling Naive Solution
    findOddOccurring(arr, n);

    return 0;
}
>>>>>>> origin/main

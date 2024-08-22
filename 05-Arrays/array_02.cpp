//Delet an Element
#include <iostream>
using namespace std;

int removeElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    cout << "Array before deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int elementToDelete = 3;

    size = removeElement(arr, size, elementToDelete);

    cout << "\nArray after deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

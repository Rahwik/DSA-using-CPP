<<<<<<< HEAD
//insert a element
#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;

    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main()
{
    const int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Array before insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int elementToInsert = 10;
    int positionToInsert = 3;

    size = insert(arr, size, elementToInsert, capacity, positionToInsert);

    cout << "\nArray after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
=======
//insert a element
#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;

    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main()
{
    const int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Array before insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int elementToInsert = 10;
    int positionToInsert = 3;

    size = insert(arr, size, elementToInsert, capacity, positionToInsert);

    cout << "\nArray after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
>>>>>>> origin/main

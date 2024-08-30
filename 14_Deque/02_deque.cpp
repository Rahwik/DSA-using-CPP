// Array implementation of Dequeue
#include <iostream>
using namespace std;

class dequeue
{
public:
    int size, cap;
    int* arr;

    dequeue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    ~dequeue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isempty()
    {
        return (size == 0);
    }

    void insertrear(int x)
    {
        if (isFull())
        {
            return;
        }
        arr[size] = x;
        size++;
    }

    void deleterear()
    {
        if (isempty())
        {
            return;
        }
        size--;
    }

    int getrear()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[size - 1];
        }
    }

    void insertfront(int x)
    {
        if (isFull())
        {
            return;
        }
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void deletefront()
    {
        if (isempty())
        {
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getfront()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[0];
        }
    }
};

int main()
{
    dequeue dq(5);
    dq.insertrear(1);
    dq.insertrear(2);
    dq.insertfront(3);
    cout << dq.getfront() << endl;
    cout << dq.getrear() << endl;
    dq.deletefront();
    cout << dq.getfront() << endl;
    return 0;
}
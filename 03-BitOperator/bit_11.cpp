//Two Odd Occuring
#include <iostream>
using namespace std;

// Naive Solution:
void OddAppearing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << " " << endl;
        }
    }
}

// Efficient Solution:
pair<int, int> OddAppearing2(int arr[], int n)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    int sn = XOR & ~(XOR - 1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sn) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }

    return make_pair(res1, res2);
}

int main()
{
    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements occurring an odd number of times are: ";
    OddAppearing(arr, n);
    pair<int, int> result = OddAppearing2(arr, n);
    cout << "Elements occurring an odd number of times are: " << result.first << " and " << result.second << endl;

    return 0;
}

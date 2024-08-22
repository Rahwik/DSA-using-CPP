<<<<<<< HEAD
//Subsets Sum Problem
#include<iostream>
using namespace std;

int countsubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return countsubsets(arr, n - 1, sum) + countsubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    cout << "Number of subsets with sum " << sum << ": " << countsubsets(arr, n, sum) << endl;

    return 0;
}
=======
//Subsets Sum Problem
#include<iostream>
using namespace std;

int countsubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return countsubsets(arr, n - 1, sum) + countsubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    cout << "Number of subsets with sum " << sum << ": " << countsubsets(arr, n, sum) << endl;

    return 0;
}
>>>>>>> origin/main

<<<<<<< HEAD
#include<iostream>
using namespace std;
int getSum(int arr[],int n)
{
    int sum=0;
    if(n%2 != 0)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
     int myArr[] = {1, 2, 3, 4, 5, 6};
    int arraySize = sizeof(myArr) / sizeof(myArr[0]);

    int result = getSum(myArr, arraySize);

    if (result != -1)
    {
        cout << "Sum of the array elements: " << result << endl;
    }

    return 0;
}
/*
Best Case: Constant(n=odd)
Average Case: Linear(n= under the assumption that even and odd are equally likely.)
Worst Case: Linear(n=even)

*We always consider the worst case and many consider the average case.
=======
#include<iostream>
using namespace std;
int getSum(int arr[],int n)
{
    int sum=0;
    if(n%2 != 0)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
     int myArr[] = {1, 2, 3, 4, 5, 6};
    int arraySize = sizeof(myArr) / sizeof(myArr[0]);

    int result = getSum(myArr, arraySize);

    if (result != -1)
    {
        cout << "Sum of the array elements: " << result << endl;
    }

    return 0;
}
/*
Best Case: Constant(n=odd)
Average Case: Linear(n= under the assumption that even and odd are equally likely.)
Worst Case: Linear(n=even)

*We always consider the worst case and many consider the average case.
>>>>>>> origin/main
*/
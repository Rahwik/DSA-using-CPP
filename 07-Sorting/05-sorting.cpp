#include<iostream>
using namespace std;

//Naive method
void mergeNaive(int a[], int b[], int m, int n)
{
    int c[m+n];
    for(int i=0; i<m; i++)
    {
        c[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        c[m+i]=b[i];
    }
    sort(c, c+m+n);
    for(int i = 0; i<(m+n); i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

//Efficient Approach
void mergeEfficient(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
    cout<<endl;
}

int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    
    cout<<"Naive Method: ";
    mergeNaive(a, b, m, n);
    
    cout<<"Efficient Method: ";
    mergeEfficient(a, b, m, n);
    
    return 0;
}
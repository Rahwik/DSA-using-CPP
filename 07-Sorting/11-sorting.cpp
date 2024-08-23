//Quick Sort Algorithm
void qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p= partition(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}
//considering lomuto partitioning
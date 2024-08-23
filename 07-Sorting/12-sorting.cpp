//Quick sort hoare's partition
void qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p= partition(arr,l,h);
        qsort(arr,l,p);
        qsort(arr,p+1,h);
    }
}
/*
lomuto partition makes the pivot fixed and revolves around it whereas the hoare's
partition does not have a fixed partition
*/
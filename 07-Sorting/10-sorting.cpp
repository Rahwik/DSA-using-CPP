// Hoare Parition
/*
 *Takes the first element as pivot.
 *Partitions the given array around the pivot element.
 *All elements less than the pivot will be on the left of the pivot
 *And all elements greater than the pivot will be on the right of the pivot.
 */
int hpartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
}


//Lomuto Partition
//Takes the last element and puts it at the correct position, Then returns the element.
int lpartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for(int j = l; j < h; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}
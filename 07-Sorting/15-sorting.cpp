//Sort an array with two types
//Naive Method
void segregateposneg(int arr[], int n) {
    int temp[n], i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++) {
        if (arr[j] >= 0) {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++) {
        arr[j] = temp[j];
    }
}
//Efficient Solution :
/*
IDEA : this problem is mainly a variation of the partition()\
       of Quick sort.
*/
void segregateposneg(int arr[], int n) {
    int i = -1, j = n;
    while (i < j) {
        do {
            i++;
        } while (arr[i] < 0);
        do {
            j--;
        } while (arr[j] >= 0);
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
}

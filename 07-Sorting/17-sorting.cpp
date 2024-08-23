//Minimum Diffrence in an array
//Naive Method
int getMinDiff(int arr[], int n) {
    int res = INT_MAX;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res;
}
//Efficient Method
int getMinDiff(int arr[], int n) {
    sort(arr, arr + n);
    int res=INt_MAX;
    for(int i=1;i<n;i++)
    {
        res=min(res,arr[i]-arr[i-1]);
    }
    return res;
}

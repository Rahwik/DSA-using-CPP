//Meeting maximum Guests
#include <iostream>
#include <algorithm>

using namespace std;

int maxGuest(int arr[], int dep[], int n) {
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 0, j = 0;
    int res = 1, curr = 1;
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            curr++;
            i++;
        } else {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of guests: ";
    cin >> n;

    int arr[n], dep[n];
    cout << "Enter the arrival times: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the departure times: ";
    for (int i = 0; i < n; i++) {
        cin >> dep[i];
    }

    int maxGuests = maxGuest(arr, dep, n);
    cout << "Maximum number of guests at any time: " << maxGuests << endl;

    return 0;
}
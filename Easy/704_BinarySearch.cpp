#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int n)
{
    int f = 0;
    int l = s - 1;

    while (f <= l)
    {
        int mid = f + (l - f) / 2;

        if (arr[mid] == n)
            return mid;

        if (n < arr[mid])
            l = mid - 1;
        else
            f = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15};
    int s = sizeof(arr) / sizeof(arr[0]);

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    int res = binarySearch(arr, s, n);

    if (res != -1)
        cout << "Element Found at index " << res;
    else
        cout << "Element Not Found";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{
    int start = 1, end = n - 2, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;

        if (arr[mid] > arr[mid - 1])
            start = mid + 1;
        else
            end = mid - 1;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = peakIndexInMountainArray(arr, n);

    cout << result;

    return 0;
}
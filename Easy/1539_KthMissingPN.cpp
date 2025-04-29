#include <bits/stdc++.h>
using namespace std;

int findKthPositive(int arr[], int n, int k)
{
    int start = 0, end = n - 1, mid, ans = n + k;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if ((arr[mid] - (mid + 1)) < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            ans = mid + k;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "Enter the Target value: ";
    cin >> k;

    int result = findKthPositive(arr, n, k);

    cout << result;

    return 0;
}
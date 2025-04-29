#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int nums[], int n)
{
    if (n == 1)
        return 0;

    int start = 0, end = n - 2, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] < nums[mid + 1])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return start;
}

int main()
{
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findPeakElement(nums, n);

    cout << result;

    return 0;
}
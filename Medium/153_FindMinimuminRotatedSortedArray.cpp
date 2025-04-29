#include <bits/stdc++.h>
using namespace std;

int findMin(int nums[], int n)
{
    int start = 0, end = n - 1, mid, ans = nums[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[0] <= nums[mid])
            start = mid + 1;
        else
        {
            end = mid - 1;
            ans = nums[mid];
        }
    }

    return ans;
}

int main()
{
    int nums[] = {10, 2, 4, 6, 8};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findMin(nums, n);

    cout << result;

    return 0;
}
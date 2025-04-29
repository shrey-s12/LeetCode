#include <bits/stdc++.h>
using namespace std;

int findMin(int nums[], int n, int target)
{
    if (nums[0] == target)
        return 0;

    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[0] > nums[mid])
        {
            if (nums[mid] < target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
        else
        {
            if (nums[0] <= target && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int nums[] = {10, 12, 2, 4, 6, 8};
    int n = sizeof(nums) / sizeof(nums[0]);

    int target;
    cout << "Enter the Target value: ";
    cin >> target;

    int result = findMin(nums, n, target);

    cout << result;

    return 0;
}
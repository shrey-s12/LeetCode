#include <bits/stdc++.h>
using namespace std;

bool search(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return true;

        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start += 1;
            end -= 1;
            continue;
        }

        if (nums[start] > nums[mid])
        {
            if (nums[mid] < target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
        else
        {
            if (nums[start] <= target && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }

    return false;
}

int main()
{
    int nums[] = {1, 1, 1, 1, 1, 1, 0, 1, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int target;
    cout << "Enter the Target value: ";
    cin >> target;

    bool result = search(nums, n, target);

    cout << result;

    return 0;
}
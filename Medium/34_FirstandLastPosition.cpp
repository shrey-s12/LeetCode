#include <bits/stdc++.h>
using namespace std;

void searchRange(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid, first = -1, last = -1;

    // First
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (target == nums[mid])
            first = mid;

        if (target > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    // Second
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (target == nums[mid])
            last = mid;

        if (target < nums[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    cout << first << " " << last;
}

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);

    int target;
    cout << "Enter the No.: ";
    cin >> target;

    searchRange(nums, n, target);

    return 0;
}
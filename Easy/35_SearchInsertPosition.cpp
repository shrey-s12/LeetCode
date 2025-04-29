#include <bits/stdc++.h>
using namespace std;

int searchInsert(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid, index = n;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (target == nums[mid])
            return mid;

        if (target > nums[mid])
            start = mid + 1;
        else
        {
            end = mid - 1;
            index = mid;
        }
    }

    return index;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    int target;
    cout << "Enter the No.: ";
    cin >> target;

    int result = searchInsert(nums, n, target);

    cout << result;

    return 0;
}
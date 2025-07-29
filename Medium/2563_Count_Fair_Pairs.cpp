#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int start, int end, int target)
{
    int index = end + 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] >= target)
        {
            end = mid - 1;
            index = mid;
        }
        else
            start = mid + 1;
    }

    return index;
}

int upperBound(vector<int> &nums, int start, int end, int target)
{
    int index = start - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] <= target)
        {
            start = mid + 1;
            index = mid;
        }
        else
            end = mid - 1;
    }

    return index;
}
long long countFairPairs(vector<int> &nums, int lower, int upper)
{
    int n = nums.size();
    long long count = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 1; i++)
    {
        int l = lower - nums[i];
        int u = upper - nums[i];

        int index_l = lowerBound(nums, i + 1, n - 1, l);
        int index_u = upperBound(nums, i + 1, n - 1, u);

        if (index_l <= index_u)
            count += index_u - index_l + 1;
    }

    return count;
}

int main()
{
    // vector<int> nums = {0, 1, 7, 4, 4, 5}; // 6
    // int lower = 3, upper = 6;

    vector<int> nums = {1, 7, 9, 2, 5}; // 1
    int lower = 11, upper = 11;

    int ans = countFairPairs(nums, lower, upper);
    cout << ans;
    return 0;
}
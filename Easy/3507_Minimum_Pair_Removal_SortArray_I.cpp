#include <bits/stdc++.h>
using namespace std;

int minimumPairRemoval(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    while (!is_sorted(nums.begin(), nums.end()))
    {
        int index = 0, sum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] + nums[i + 1] < sum)
            {
                index = i;
                sum = nums[i] + nums[i + 1];
            }
        }
        vector<int> result;
        for (int i = 0; i < index; i++)
        {
            result.push_back(nums[i]);
        }
        result.push_back(sum);
        for (int i = index + 2; i < n; i++)
        {
            result.push_back(nums[i]);
        }

        swap(nums, result);
        n--;
        ans++;
    }

    return ans;
}

int main()
{
    // vector<int> nums = {5, 2, 3, 1}; // 2
    vector<int> nums = {1, 2, 2}; // 0

    int ans = minimumPairRemoval(nums);
    cout << ans;
    return 0;
}

// TC => n^2
// SC => n
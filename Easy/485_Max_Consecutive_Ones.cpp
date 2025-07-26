#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int maxCount = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
            count++;
        else
            count = 0;
        maxCount = max(maxCount, count);
    }
    return maxCount;
}

int main()
{
    // vector<int> nums = {1, 1, 0, 1, 1, 1}; // 3
    vector<int> nums = {1, 0, 1, 1, 0, 1}; // 2

    int ans = findMaxConsecutiveOnes(nums);
    cout << ans;
    return 0;
}
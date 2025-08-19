#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int minCount = INT_MAX;
    long long sum = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += nums[j];
        j++;

        while (sum >= target)
        {
            minCount = min(minCount, j - i);
            sum -= nums[i];
            i++;
        }
    }

    return minCount == INT_MAX ? 0 : minCount;
}

int main()
{
    // int target = 7;
    // vector<int> nums = {2,3,1,2,4,3}; // 2
    // int target = 4;
    // vector<int> nums = {1, 4, 4}; // 1
    int target = 11;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1}; // 0

    int ans = minSubArrayLen(target, nums);
    cout << ans;
    return 0;
}
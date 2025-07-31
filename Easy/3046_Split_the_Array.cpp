#include <bits/stdc++.h>
using namespace std;

bool isPossibleToSplit(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int i = 0;

    while (i < n - 2)
    {
        if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
            return false;
        i++;
    }

    return true;
}

int main()
{
    // vector<int> nums = {1, 1, 2, 2, 3, 4}; // true
    vector<int> nums = {6, 1, 3, 1, 1, 8, 9, 2}; // false

    bool ans = isPossibleToSplit(nums);
    cout << ans;
    return 0;
}
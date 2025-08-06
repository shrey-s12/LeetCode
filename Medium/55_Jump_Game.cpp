#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int maxReach = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > maxReach)
            return false;

        maxReach = max(maxReach, i + nums[i]);
    }

    return true;
}

int main()
{

    // vector<int> nums = {2,3,1,1,4}; // true
    vector<int> nums = {3, 2, 1, 0, 4}; // false

    bool ans = canJump(nums);
    cout << (ans ? "true" : "false");
    return 0;
}
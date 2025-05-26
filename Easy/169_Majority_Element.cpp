#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int candidate, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count++;
        }
        else
        {
            if (candidate == nums[i])
                count++;
            else
                count--;
        }
    }

    return candidate;
}

int main()
{
    vector<int> nums = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};

    int ans = majorityElement(nums);

    cout << ans;
    return 0;
}
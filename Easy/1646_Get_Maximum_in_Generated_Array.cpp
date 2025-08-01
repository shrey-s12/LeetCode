#include <bits/stdc++.h>
using namespace std;

int getMaximumGenerated(int n)
{
    if (n <= 0)
        return 0;

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    int maxVal = 1;

    for (int i = 1; i < n / 2 + 1; i++)
    {
        if (2 <= 2 * i && 2 * i <= n)
        {
            nums.push_back(nums[i]);
            maxVal = max(maxVal, nums.back());
        }
        if (2 <= 2 * i + 1 && 2 * i + 1 <= n)
        {
            nums.push_back(nums[i] + nums[i + 1]);
            maxVal = max(maxVal, nums.back());
        }
    }

    return maxVal;
}

int main()
{
    // int n = 7; // 3
    // int n = 2; // 1
    int n = 3; // 2

    int ans = getMaximumGenerated(n);
    cout << ans;
    return 0;
}
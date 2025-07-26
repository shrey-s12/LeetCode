#include <bits/stdc++.h>
using namespace std;

int sumIndicesWithKSetBits(vector<int> &nums, int k)
{
    int n = nums.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int q = 0, setBit = 0, index = i;
        while (index > 0)
        {
            q = index % 2;
            if (q == 1)
                setBit++;
            index /= 2;
        }

        if (setBit == k)
            ans += nums[i];
    }

    return ans;
}

int main()
{
    // vector<int> nums = {5, 9, 1, 5, 2}; // 12
    // int k = 1;

    vector<int> nums = {4, 3, 2, 1}; // 1
    int k = 2;

    int ans = sumIndicesWithKSetBits(nums, k);
    cout << ans << endl;
    return 0;
}
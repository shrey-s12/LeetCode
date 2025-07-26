#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < k)
            count++;
    }

    return count;
}

int main()
{
    // vector<int> nums = {2,11,10,1,3}; // 3
    // int k = 10;
    vector<int> nums = {1, 1, 2, 4, 9}; // 4
    int k = 9;

    int ans = minOperations(nums, k);
    cout << ans << endl;
    return 0;
}
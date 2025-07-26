#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    set<int> mySet;

    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] <= k)
            mySet.insert(nums[i]);
        count++;

        if (mySet.size() == k)
            break;
    }

    return count;
}

int main()
{
    // vector<int> nums = {3,1,5,4,2}; // 4
    // int k = 2;
    vector<int> nums = {3, 1, 5, 4, 2}; // 5
    int k = 5;

    int ans = minOperations(nums, k);
    cout << ans << endl;
    return 0;
}
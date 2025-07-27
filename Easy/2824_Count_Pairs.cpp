#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int target)
{
    int n = nums.size();
    int count = 0;

    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (nums[i] + nums[j] < target)
        {
            count += j - i;
            i++;
        }
        else
            j--;
    }

    return count;
}

int main()
{
    // vector<int> nums = {-1,1,2,3,1}; //3
    // int target = 2;

    vector<int> nums = {-6, 2, 5, -2, -7, -1, 3}; // 10
    int target = -2;

    int ans = countPairs(nums, target);
    cout << ans;
    return 0;
}
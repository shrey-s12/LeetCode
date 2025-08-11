#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int temp = 1;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(temp);
        temp *= nums[i];
    }

    int pre = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * pre;
        pre *= nums[i];
    }

    return ans;
}

int main()
{
    // vector<int> nums = {1, 2, 3, 4}; // 24,12,8,6
    vector<int> nums = {-1, 1, 0, -3, 3}; // 0,0,9,0,0

    vector<int> ans = productExceptSelf(nums);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
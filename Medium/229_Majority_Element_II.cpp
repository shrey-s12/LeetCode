#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int cand1 = INT_MAX, cand2 = INT_MAX;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == cand1)
            count1++;
        else if (nums[i] == cand2)
            count2++;
        else if (count1 == 0)
        {
            cand1 = nums[i];
            count1++;
        }
        else if (count2 == 0)
        {
            cand2 = nums[i];
            count2++;
        }
        else
        {
            count1--, count2--;
        }
    }

    count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == cand1)
            count1++;
        else if (nums[i] == cand2)
            count2++;
    }

    vector<int> ans;
    if (count1 > n / 3)
        ans.push_back(cand1);
    if (count2 > n / 3)
        ans.push_back(cand2);

    return ans;
}

int main()
{
    // vector<int> nums = {1, 2}; // 1 2
    // vector<int> nums = {3, 2, 3}; // 3
    // vector<int> nums = {2, 2, 1, 3}; // 2
    vector<int> nums = {2, 1, 1, 3, 1, 4, 5, 6}; // 1

    vector<int> ans = majorityElement(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void subArray(vector<int> &nums, int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // No Select
    subArray(nums, index + 1, n, ans, temp);

    // Select
    temp.push_back(nums[index]);
    subArray(nums, index + 1, n, ans, temp);
    temp.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> temp;

    subArray(nums, 0, n, ans, temp);
    return ans;
}

int main()
{
    // vector<int> nums = {1, 2, 3};
    vector<int> nums = {0};

    vector<vector<int>> ans = subsets(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j];

        cout << endl;
    }
}
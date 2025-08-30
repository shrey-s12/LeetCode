#include <bits/stdc++.h>
using namespace std;

void targetSum(vector<int> &arr, int index, int n, int target,
               vector<vector<int>> &ans, vector<int> &temp)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (index == n || target < 0)
        return;

    targetSum(arr, index + 1, n, target, ans, temp);

    temp.push_back(arr[index]);
    targetSum(arr, index, n, target - arr[index], ans, temp);
    temp.pop_back();
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    int n = candidates.size();
    vector<vector<int>> ans;
    vector<int> temp;

    targetSum(candidates, 0, n, target, ans, temp);
    return ans;
}

int main()
{
    // vector<int> candidates = {2, 3, 6, 7};
    // int target = 7; // [[2,2,3],[7]]
    vector<int> candidates = {2, 3, 5};
    int target = 8; // [[2,2,2,2],[2,3,3],[3,5]]

    vector<vector<int>> ans = combinationSum(candidates, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

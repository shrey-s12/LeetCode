#include <bits/stdc++.h>
using namespace std;

vector<int> resultArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr1;
    vector<int> arr2;

    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);

    for (int i = 2; i < n; i++)
    {
        if (arr1.back() > arr2.back())
            arr1.push_back(nums[i]);
        else
            arr2.push_back(nums[i]);
    }

    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}

int main()
{
    // vector<int> nums = {2, 1, 3}; // 2,3,1
    vector<int> nums = {5, 4, 3, 8}; // 5,3,4,8

    vector<int> ans = resultArray(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
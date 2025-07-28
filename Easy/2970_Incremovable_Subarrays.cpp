#include <bits/stdc++.h>
using namespace std;

int incremovableSubarrayCount(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> temp;
            bool valid = 1;

            for (int k = 0; k < i; k++)
            {
                temp.push_back(nums[k]);
            }

            for (int k = j + 1; k < n; k++)
            {
                temp.push_back(nums[k]);
            }

            if (temp.size() <= 1)
            {
                valid = 1;
            }
            else
            {
                for (int k = 0; k < temp.size() - 1; k++)
                {
                    if (temp[k] >= temp[k + 1])
                    {
                        valid = 0;
                        break;
                    }
                }
            }

            if (valid)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    // vector<int> nums = {6, 5, 7, 8}; // 7
    // vector<int> nums = {8, 7, 6, 6}; // 3
    vector<int> nums = {1, 2, 6, 5, 7, 8}; // 15

    int ans = incremovableSubarrayCount(nums);
    cout << ans;
    return 0;
}
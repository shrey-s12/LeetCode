#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        cout << '[';
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
            if (j != col - 1)
                cout << " ";
        }
        cout << ']';
        cout << endl;
    }
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int i = 0, j, k;

    while (i < n - 2)
    {
        j = i + 1;
        k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;

                while (j < k && nums[j] == nums[j - 1])
                    j++;

                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
            else if (sum > 0)
                k--;
            else
                j++;
        }

        while (i < n - 2 && nums[i] == nums[i + 1])
            i++;
        i++;
    }

    return ans;
}

int main()
{
    // vector<int> nums = {-1, 0, 1, 2, -1, -4}; // [[-1,-1,2],[-1,0,1]]
    // vector<int> nums = {0, 1, 1}; // []
    vector<int> nums = {0, 0, 0}; // [0,0,0]

    vector<vector<int>> ans = threeSum(nums);
    Print2DArrayVector(ans);
    return 0;
}
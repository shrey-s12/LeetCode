#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    vector<int> count(3, 0);

    for (int i = 0; i < n; i++)
        count[nums[i]]++;

    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        while (count[i] != 0)
        {
            nums[index] = i;
            index++, count[i]--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}

int main()
{
    // vector<int> nums = {2, 0, 2, 1, 1, 0}; // 0,0,1,1,2,2
    vector<int> nums = {2, 0, 1}; // 0,1,2

    sortColors(nums);
    return 0;
}
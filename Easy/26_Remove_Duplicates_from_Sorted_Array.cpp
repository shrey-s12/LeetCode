#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int i = nums[0], j = 1, count = 1;
    while (j < n)
    {
        if (i == nums[j])
        {
            j++;
        }
        else
        {
            nums[count] = nums[j];
            i = nums[j];
            count++, j++;
        }
    }

    return count;
}

int main()
{
    // vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // 5
    vector<int> nums = {1, 1, 2}; // 2

    int k = removeDuplicates(nums);
    cout << "Ans k = " << k << endl;
    
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
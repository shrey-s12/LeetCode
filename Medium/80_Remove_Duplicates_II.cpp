#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int i = nums[0], j = 1, count = 1, element = 1;

    while (j < n)
    {
        if (i == nums[j])
        {
            if (element == 1)
            {
                nums[count] = nums[j];
                count++, element++;
            }
            j++;
        }
        else
        {
            nums[count] = nums[j];
            i = nums[j];
            j++;
            count++;
            element = 1;
        }
    }

    return count;
}

int main()
{
    // vector<int> nums = {1, 1, 1, 2, 2, 3}; // 5;
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3}; // 7;

    int k = removeDuplicates(nums);
    cout << "Ans k = " << k << endl;

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}
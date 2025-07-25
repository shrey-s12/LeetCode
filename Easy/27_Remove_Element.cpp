#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int i = 0, j = 0;

    while (j < n)
    {
        if (nums[j] == val)
            j++;
        else
        {
            nums[i] = nums[j];
            i++, j++;
        }
    }
    return i;
}

int main()
{
    // vector<int> nums = {3, 2, 2, 3}; // 2
    // int val = 3;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2}; // 5
    int val = 2;

    int k = removeElement(nums, val);
    cout << "Ans k = " << k << endl;

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
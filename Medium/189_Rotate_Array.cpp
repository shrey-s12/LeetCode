#include <bits/stdc++.h>
using namespace std;

void swapArray(vector<int> &nums, int i, int j)
{
    while (i < j)
        swap(nums[i++], nums[j--]);
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    swapArray(nums, 0, n - 1);
    swapArray(nums, 0, k - 1);
    swapArray(nums, k, n - 1);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // 5,6,7,1,2,3,4
    int k = 3;

    rotate(nums, k);
    return 0;
}
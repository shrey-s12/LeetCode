#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int start, int mid, int end)
{
    int n = end - start + 1;
    vector<int> temp(n);

    int i = start, j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end)
    {
        if (nums[i] <= nums[j])
            temp[k++] = nums[i++];
        else
            temp[k++] = nums[j++];
    }

    // left numsay is not empty
    while (i <= mid)
        temp[k++] = nums[i++];

    // right numsay is not empty
    while (j <= end)
        temp[k++] = nums[j++];

    // Copy temp into numsay
    k = 0;
    while (start <= end)
        nums[start++] = temp[k++];
}

void mergeSort(vector<int> &nums, int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;

    // Left Side
    mergeSort(nums, start, mid);
    // Right Side
    mergeSort(nums, mid + 1, end);

    // Merge left + Right
    merge(nums, start, mid, end);
}

int main()
{
    // vector<int> nums = {7, 5, 6, 9, 3};
    vector<int> nums = {8, 2, 4, 1, 5, 7, 5, 6, 9, 3};
    int n = nums.size();

    mergeSort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}
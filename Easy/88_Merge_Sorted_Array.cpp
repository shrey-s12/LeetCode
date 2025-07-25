#include <bits/stdc++.h>
using namespace std;

void printnums1(vector<int> &nums1)
{
    int n = nums1.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums1[i] << endl;
    }
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, index = m + n - 1;
    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
            nums1[index--] = nums1[i--];

        else
            nums1[index--] = nums2[j--];
    }

    printnums1(nums1);
}

int main()
{
    // vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    // vector<int> nums2 = {2, 4, 5};
    // int m = 3, n = 3;  // O/p => [1,2,2,3,5,6]

    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    int m = 1, n = 0; // O/p => [1]

    // vector<int> nums1 = {4, 5, 6, 0, 0, 0};
    // vector<int> nums2 = {1, 2, 3};
    // int m = 3, n = 3; // O/p => [1,2,3,4,5,6]

    merge(nums1, m, nums2, n);
    return 0;
}
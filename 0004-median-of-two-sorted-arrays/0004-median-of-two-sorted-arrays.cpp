class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> v;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n) {
            v.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            v.push_back(nums2[j]);
            j++;
        }

        n = v.size();
        int start = 0, end = n - 1, mid = end / 2;

        if (end % 2 == 0)
            return v[mid];
        else {
            double val = v[mid] + v[mid + 1];
            return val / 2;
        }

        return 0;
    }
};
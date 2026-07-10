class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i = 0, j, k;

        while (i < n - 2) {
            j = i + 1;
            k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;

                    while (j < k && nums[j - 1] == nums[j])
                        j++;

                    while (j < k && nums[k] == nums[k + 1])
                        k--;

                } else if (sum > 0)
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
};
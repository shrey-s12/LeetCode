class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixGcd;
        long long mxi = 0;

        for (int x : nums) {
            if (x > mxi)
                mxi = x;
            prefixGcd.push_back(gcd(x, mxi));
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        long long ans = 0;
        long long left = 0, right = n - 1;
        while (left < right) {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++, right--;
        }
        return ans;
    }
};
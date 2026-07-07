class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);

        long long sum = 0, x = 0;
        for (char& c : s) {
            int d = c - '0';
            if (d > 0) {
                sum += d;
                x = x * 10 + d;
            }
        }

        long long ans = x * sum;
        return ans;
    }
};
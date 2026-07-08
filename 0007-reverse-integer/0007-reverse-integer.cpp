class Solution {
public:
    int reverse(int x) {
        int q, ans = 0;
        while (x) {
            q = x % 10;
            if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
                return 0;
            ans = ans * 10 + q;
            x /= 10;
        }
        return ans;
    }
};
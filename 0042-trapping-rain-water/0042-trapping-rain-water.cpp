class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int maxHeight = height[0], idx = 0;

        for (int i = 1; i < n; i++) {
            if (height[i] > maxHeight) {
                maxHeight = height[i];
                idx = i;
            }
        }

        int leftMax = 0, rightMax = 0, ans = 0;
        for (int i = 0; i < idx; i++) {
            leftMax = max(leftMax, height[i]);
            ans += leftMax - height[i];
        }

        for (int i = n - 1; i > idx; i--) {
            rightMax = max(rightMax, height[i]);
            ans += rightMax - height[i];
        }

        return ans;
    }
};
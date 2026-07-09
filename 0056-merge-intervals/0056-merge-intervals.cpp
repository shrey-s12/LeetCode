class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        int x1 = intervals[0][0];
        int y1 = intervals[0][1];
        int x2, y2;

        for (int i = 1; i < n; i++) {
            x2 = intervals[i][0];
            y2 = intervals[i][1];

            if (y1 >= x2)
                y1 = max(y1, y2);
            else {
                ans.push_back({x1, y1});
                x1 = x2;
                y1 = y2;
            }
        }
        ans.push_back({x1, y1});

        return ans;
    }
};
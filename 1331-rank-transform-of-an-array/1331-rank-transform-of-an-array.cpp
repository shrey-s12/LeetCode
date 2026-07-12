class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

        vector<int> v = arr;
        sort(v.begin(), v.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int& x : v) {
            if (mp.find(x) == mp.end())
                mp[x] = rank++;
        }

        vector<int> ans;
        for(int& x: arr){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};
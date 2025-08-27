#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int n = g.size();
    int m = s.size();
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int child = 0, cookie = 0;
    int maxChildren = 0;

    while (child < n && cookie < m)
    {
        if (g[child] <= s[cookie])
        {
            maxChildren++;
            child++;
        }
        cookie++;
    }

    return maxChildren;
}

int main()
{
    // vector<int> g = {1, 2, 3};
    // vector<int> s = {1, 1}; // 1
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3}; // 2

    int ans = findContentChildren(g, s);
    cout << ans;
    return 0;
}
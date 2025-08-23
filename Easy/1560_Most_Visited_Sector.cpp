#include <bits/stdc++.h>
using namespace std;

vector<int> mostVisited(int n, vector<int> &rounds)
{
    int m = rounds.size();
    vector<int> ans;
    int start = rounds[0];
    int end = rounds[m - 1];

    if (start <= end)
    {
        for (int i = start; i <= end; i++)
            ans.push_back(i);
    }
    else
    {
        for (int i = 1; i <= end; i++)
            ans.push_back(i);
        for (int i = start; i <= n; i++)
            ans.push_back(i);
    }

    return ans;
}
int main()
{
    // int n = 4;
    // vector<int> rounds = {1, 3, 1, 2}; // 1 2
    // int n = 2;
    // vector<int> rounds = {2, 1, 2, 1, 2, 1, 2, 1, 2}; // 2
    int n = 7;
    vector<int> rounds = {1, 3, 5, 7}; // 1 2 3 4 5 6 7

    vector<int> ans = mostVisited(n, rounds);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
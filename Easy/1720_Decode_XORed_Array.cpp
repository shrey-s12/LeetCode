#include <bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    int n = encoded.size();
    vector<int> ans{first};

    for (int i = 0; i < n; i++)
        ans.push_back(ans.back() ^ encoded[i]);

    return ans;
}

int main()
{
    // vector<int> encoded = {1, 2, 3}; // 1,0,2,1
    // int first = 1;

    vector<int> encoded = {6, 2, 7, 3}; // 4,2,0,7,4
    int first = 4;

    vector<int> ans = decode(encoded, first);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
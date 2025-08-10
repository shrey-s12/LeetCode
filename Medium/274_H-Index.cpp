#include <bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &citations)
{
    int n = citations.size();
    sort(citations.begin(), citations.end());
    int h = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (h < citations[i])
            h++;
    }

    return h;
}

int main()
{
    // vector<int> citations = {3,0,6,1,5}; //3
    vector<int> citations = {1, 3, 1}; // 1

    int ans = hIndex(citations);
    cout << ans;
    return 0;
}
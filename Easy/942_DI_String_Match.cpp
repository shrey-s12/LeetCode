#include <bits/stdc++.h>
using namespace std;

vector<int> diStringMatch(string s)
{
    int n = s.size();
    vector<int> perm;
    int i = 0, j = n, index = 0;

    while (i != j)
    {
        if (s[index] == 'I')
            perm.push_back(i++);
        else
            perm.push_back(j--);
        index++;
    }
    perm.push_back(i);

    return perm;
}

int main()
{
    // string s = "IDID"; // 0,4,1,3,2
    // string s = "III"; // 0,1,2,3
    string s = "DDI"; // 3,2,0,1

    vector<int> ans = diStringMatch(s);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
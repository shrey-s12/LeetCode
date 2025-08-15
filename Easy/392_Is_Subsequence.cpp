#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int n = s.size();
    int m = t.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (s[i] == t[j])
            i++;
        j++;
    }

    return i == n;
}

int main()
{
    // string s = "abc", t = "ahbgdc"; // true;
    string s = "axc", t = "ahbgdc"; // false;

    bool ans = isSubsequence(s, t);
    cout << (ans ? "true" : "false");
    return 0;
}
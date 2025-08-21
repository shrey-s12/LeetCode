#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int n = s.size();
    unordered_map<char, char> sCount;
    unordered_map<char, char> tCount;

    sCount[s[0]] = t[0];
    tCount[t[0]] = s[0];
    for (int i = 1; i < n; i++)
    {
        if (sCount[s[i]] && sCount[s[i]] != t[i])
            return false;
        if (tCount[t[i]] && tCount[t[i]] != s[i])
            return false;

        sCount[s[i]] = t[i];
        tCount[t[i]] = s[i];
    }

    return true;
}

int main()
{
    // string s = "egg", t = "add"; // true
    // string s = "foo", t = "bar"; // false
    // string s = "paper", t = "title"; // true
    string s = "aaabbbab", t = "bbbaaaab"; // false

    bool ans = isIsomorphic(s, t);
    cout << (ans ? "true" : "false");
    return 0;
}
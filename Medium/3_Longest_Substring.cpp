#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<bool> count(256, 0);
    int first = 0, second = 0, len = 0;

    while (second < s.size())
    {
        while (count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }

        count[s[second]] = 1;
        len = max(len, second - first + 1);
        second++;
    }

    return len;
}

int main()
{
    // string s = "abcabcbb"; // => 3 (abc)
    // string s = "bbbbb"; // => 1 (b)
    string s = "pwwkew"; // => 3 (wke)

    int ans = lengthOfLongestSubstring(s);
    cout << ans;
    return 0;
}
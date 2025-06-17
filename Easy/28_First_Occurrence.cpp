#include <bits/stdc++.h>
using namespace std;

void lpsFind(vector<int> &lps, string s)
{
    int n = s.size();
    int pre = 0, suf = 1;
    while (suf < n)
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
}

int strStr(string haystack, string needle)
{
    int n = haystack.size();
    int m = needle.size();
    
    vector<int> lps(m, 0);
    lpsFind(lps, needle);
    
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (haystack[i] == needle[j])
            i++, j++;
        else
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }

    if (j == m)
        return i - j;
    else
        return -1;
}

int main()
{
    // string haystack = "sadbutsad", needle = "sad"; //=> 0
    // string haystack = "leetcode", needle = "leeto"; // => -1
    // string haystack = "aaaaab", needle = "aaab"; // => 2
    string haystack = "abacdabad", needle = "abad"; // => 5

    int index = strStr(haystack, needle);
    cout << index;
    return 0;
}
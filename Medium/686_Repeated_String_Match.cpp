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

bool checkString(vector<int> &lps, string &txt, string a, string b, int m)
{
    int i = 0, j = 0;
    while (i < txt.size() && j < m)
    {
        if (txt[i] == b[j])
        {
            i++, j++;
            if (j == m)
                return true;
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }
    return false;
}

int repeatedStringMatch(string a, string b)
{
    int n = a.size();
    int m = b.size();
    string txt = a;
    int count = 1;
    while (txt.size() < m)
    {
        txt += a;
        count++;
    }

    vector<int> lps(m, 0);
    lpsFind(lps, b);
    if (checkString(lps, txt, a, b, m))
        return count;

    txt += a;
    count++;

    if (checkString(lps, txt, a, b, m))
        return count;

    return -1;
}

int main()
{
    string a = "abcd", b = "cdabcdab"; //=> 3
    // string a = "a", b = "aa"; //=> 2
    // string a = "abc", b = "wxyz"; //=> -1

    int ans = repeatedStringMatch(a, b);
    cout << ans;
    return 0;
}
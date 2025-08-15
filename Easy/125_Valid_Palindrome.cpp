#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.size();
    int i = 0, j = n - 1;

    while (i < j)
    {

        if (!(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z') || ('0' <= s[i] && s[i] <= '9')))
        {
            i++;
            continue;
        }
        if (!(('a' <= s[j] && s[j] <= 'z') || ('A' <= s[j] && s[j] <= 'Z') || ('0' <= s[j] && s[j] <= '9')))
        {
            j--;
            continue;
        }

        if (65 <= s[i] && s[i] <= 90)
            s[i] += 32;

        if (65 <= s[j] && s[j] <= 90)
            s[j] += 32;

        if (s[i] != s[j])
            return false;

        i++, j--;
    }

    return true;
}

int main()
{
    // string s = "A man, a plan, a canal: Panama"; // true
    // string s = "race a car"; // false
    string s = "0P"; // false

    bool ans = isPalindrome(s);
    cout << (ans ? "true" : "false");
    return 0;
}
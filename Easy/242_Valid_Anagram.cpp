#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int n = s.size();
    int m = t.size();
    if (n != m)
        return false;
    unordered_map<char, int> count;

    for (int i = 0; i < n; i++)
    {
        count[s[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (!count[t[i]])
            return false;

        count[t[i]]--;
    }

    return true;
}

int main()
{
    // string s = "anagram", t = "nagaram"; //true
    string s = "rat", t = "car"; // false

    bool ans = isAnagram(s, t);
    cout << (ans ? "true" : "false");
    return 0;
}
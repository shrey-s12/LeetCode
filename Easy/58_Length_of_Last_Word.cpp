#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int n = s.size();
    int count = 0;
    bool space = false;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            if (space)
                return count;
        }
        else
        {
            count++;
            space = true;
        }
    }

    return count;
}

int main()
{
    string s = "Shrey Singhal"; // 7
    // string s = "Hello World"; // 5
    // string s = "   fly me   to   the moon  "; // 4

    int ans = lengthOfLastWord(s);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s)
{
    int n = s.size();
    vector<int> alpha(52, 0);

    // Counting how many times each alphabet character appears
    for (char c : s)
    {
        if (islower(c))
            alpha[c - 'a']++;
        else if (isupper(c))
            alpha[c - 'A' + 26]++;
    }

    int count = 0;
    bool hasOdd = false;
    for (int i = 0; i < 52; i++)
    {
        if (alpha[i] % 2 == 0)
            count += alpha[i];
        else
        {
            count += alpha[i] - 1;
            hasOdd = true;
        }
    }

    return count + hasOdd;
}

int main()
{
    string s = "abccccdd";
    // string s = "bb";
    // string s = "ccc";
    // string s = "AAAAAA";

    int ans = longestPalindrome(s);
    cout << ans;
    return 0;
}
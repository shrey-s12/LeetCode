#include <bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string> &patterns, string word)
{
    int n = patterns.size();
    int m = word.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (word.find(patterns[i]) != string::npos)
            count++;
    }

    return count;
}

int main()
{
    // vector<string> patterns = {"a", "abc", "bc", "d"}; // 3
    // string word = "abc";

    vector<string> patterns = {"hvzoo", "r", "hyjcrgzr", "yvqahvz", "org", "yvqahvz", "org", "oor", "gxe", "zo", "ahvzoo", "ahvzo", "r", "o", "caviikty", "pkxlcaams"}; // 3
    string word = "tyvqahvzoorg";

    int ans = numOfStrings(patterns, word);
    cout << ans;
    return 0;
}
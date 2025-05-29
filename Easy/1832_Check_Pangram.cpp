#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{
    int n = sentence.size();
    int index;
    vector<bool> ans(26, 0);
    for (int i = 0; i < n; i++)
    {
        index = sentence[i] - 'a';
        ans[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ans[i] == 0)
            return false;
    }

    return true;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    // string sentence = "leetcode";

    bool ans = checkIfPangram(sentence);
    cout << ans;

    return 0;
}
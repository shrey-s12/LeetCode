#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    int n = ransomNote.size();
    int m = magazine.size();
    vector<int> count(26, 0);

    for (int i = 0; i < m; i++)
    {
        int index = magazine[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < n; i++)
    {
        int index = ransomNote[i] - 'a';
        if (count[index] > 0)
            count[index]--;
        else
            return false;
    }

    return true;
}

int main()
{
    // string ransomNote = "a", magazine = "b"; // 0
    // string ransomNote = "aa", magazine = "aab"; // 1
    string ransomNote = "aab", magazine = "baa"; // 1

    bool ans = canConstruct(ransomNote, magazine);
    cout << ans;
    return 0;
}
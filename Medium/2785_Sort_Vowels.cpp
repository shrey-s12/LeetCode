#include <bits/stdc++.h>
using namespace std;

string sortUpperAndLower(vector<int> upper, vector<int> lower)
{
    string sortedVowels;
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            sortedVowels += c;
            upper[i]--;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            sortedVowels += c;
            lower[i]--;
        }
    }

    return sortedVowels;
}

string sortVowels(string s)
{
    int n = s.size();
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
    }

    string sortedVowels = sortUpperAndLower(upper, lower);

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            s[i] = sortedVowels[index];
            index++;
        }
    }

    return s;
}

int main()
{
    // string s = "lEetcOde"; // => lEOtcede
    // string s = "lYmpH"; // => lYmpH
    string s = "LQRamBOHfq"; // => LQROmBaHfq

    string sortedVowels = sortVowels(s);
    cout << sortedVowels;
    return 0;
}
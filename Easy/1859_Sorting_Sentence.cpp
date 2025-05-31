#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s)
{
    vector<string> words(10);
    string temp;
    int index, count = 0;

    for (char c : s)
    {
        if (c != ' ')
            temp += c;
        else
        {
            index = temp[temp.size() - 1] - '0';
            temp.pop_back();
            words[index] = temp;
            temp.clear();
            count++;
        }
    }

    index = temp[temp.size() - 1] - '0';
    temp.pop_back();
    words[index] = temp;
    temp.clear();
    count++;

    for (int i = 1; i <= count; i++)
    {
        temp += words[i];
        temp += " ";
    }
    temp.pop_back();

    return temp;
}

int main()
{
    string s = "is2 sentence4 This1 a3";

    string ans = sortSentence(s);
    cout << ans;
    return 0;
}
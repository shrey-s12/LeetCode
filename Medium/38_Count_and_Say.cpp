#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> stringToArray(string s)
{
    vector<vector<int>> count;
    int currentDigit = s[0] - '0';
    int valCount = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        if (currentDigit == digit)
        {
            valCount++;
        }
        else
        {
            count.push_back({valCount, currentDigit});
            currentDigit = digit;
            valCount = 1;
        }
    }

    count.push_back({valCount, currentDigit});
    return count;
}

string arrayToString(vector<vector<int>> &count)
{
    string result = "";

    for (int i = 0; i < count.size(); i++)
    {
        result += to_string(count[i][0]);
        result += to_string(count[i][1]);
    }

    return result;
}
string buildSequence(int n)
{
    if (n == 1)
        return "1";

    string prev = buildSequence(n - 1);
    vector<vector<int>> count = stringToArray(prev);
    return arrayToString(count);
}

string countAndSay(int n)
{
    string ans = buildSequence(n);
    return ans;
}

int main()
{
    // int n = 4; // "1211"
    // int n = 1; // "1"
    int n = 5; // "111221"

    string ans = countAndSay(n);
    cout << ans;
}
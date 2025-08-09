#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    int n = s.size();
    vector<string> str(numRows, "");
    bool check = true;
    int index = 0;
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        str[index].push_back(s[i]);

        if (index == 0)
            check = true;
        if (index == numRows - 1)
            check = false;

        if (check)
            index++;
        else
            index--;
    }

    for (int i = 0; i < numRows; i++)
        ans += str[i];

    return ans;
}

int main(){
    string s = "PAYPALISHIRING"; 
    // int numRows = 3; // PAHNAPLSIIGYIR
    int numRows = 4; // PINALSIGYAHRPI

    string str = convert(s,numRows);
    cout << str;
    return 0;
}
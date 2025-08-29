#include <bits/stdc++.h>
using namespace std;

void generate(int n, int left, int right, vector<string> &ans,
              string &temp)
{
    if (left == n && right == n)
    {
        ans.push_back(temp);
        return;
    }

    if (left < n)
    {
        temp.push_back('(');
        generate(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if (right < left)
    {
        temp.push_back(')');
        generate(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string temp = "";
    int left = 0, right = 0;

    generate(n, left, right, ans, temp);
    return ans;
}

int main()
{
    // int n = 3; // (())) (()()) (())() ()(()) ()()()
    int n = 4;

    vector<string> ans = generateParenthesis(n);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
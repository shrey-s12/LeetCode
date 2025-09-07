#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.size();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;

            if (s[i] == ')' && st.top() != '(')
                return false;
            else if (s[i] == '}' && st.top() != '{')
                return false;
            else if (s[i] == ']' && st.top() != '[')
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    // string s = "["; // false
    // string s = "()"; // true
    // string s = "(]"; // false
    string s = "()[]{}"; // true

    bool ans = isValid(s);
    cout << (ans ? "true" : "false");
    return 0;
}
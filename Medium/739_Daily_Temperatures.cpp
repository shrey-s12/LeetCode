#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    int n = temperatures.size();
    stack<int> st;
    vector<int> ans(n, 0);

    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty())
        {
            if (temperatures[i] >= temperatures[st.top()])
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                    break;
                }
            }
            else
            {
                ans[i] = st.top() - i;
                st.push(i);
                break;
            }
        }
    }

    return ans;
}

int main()
{
    // vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73}; // 1 1 4 2 1 1 0 0
    // vector<int> temperatures = {30, 40, 50, 60}; // 1 1 1 0
    vector<int> temperatures = {30, 60, 90};     // 1 1 0

    vector<int> ans = dailyTemperatures(temperatures);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
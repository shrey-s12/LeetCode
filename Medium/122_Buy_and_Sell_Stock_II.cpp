#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int buy = prices[0];
    int ans = 0, profit = 0;
    int i = 1;

    while (i < n)
    {
        profit = prices[i] - buy;
        if (profit > 0)
            ans += profit;
        buy = prices[i];
        i++;
    }

    return ans;
}

int main()
{
    // vector<int> prices = {7, 1, 5, 3, 6, 4}; // 7
    // vector<int> prices = {1,2,3,4,5}; // 4
    vector<int> prices = {7, 6, 4, 3, 1}; // 0

    int ans = maxProfit(prices);
    cout << ans;
    return 0;
}
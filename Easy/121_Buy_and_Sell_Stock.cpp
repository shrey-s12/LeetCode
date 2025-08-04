#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int buy = prices[0];
    int profit = 0;
    int i = 1;

    while (i < n)
    {
        profit = max(profit, prices[i] - buy);
        if (prices[i] < buy)
            buy = prices[i];
        i++;
    }

    return profit;
}

int main()
{
    // vector<int> prices = {7, 1, 5, 3, 6, 4}; // 5
    vector<int> prices = {7, 6, 4, 3, 1}; // 0

    int ans = maxProfit(prices);
    cout << ans;
    return 0;
}
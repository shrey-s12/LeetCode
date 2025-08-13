#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int n = gas.size();
    int totalGas = 0, totalCost = 0;

    for (int i = 0; i < n; i++)
    {
        totalGas += gas[i];
        totalCost += cost[i];
    }

    if (totalCost > totalGas)
        return -1;

    int index = 0, rem = 0;
    for (int i = 0; i < n; i++)
    {
        rem = rem + gas[i] - cost[i];
        if (rem < 0)
        {
            index = i + 1;
            rem = 0;
        }
    }

    return index;

    // int index = 0, rem = 0, minRem;
    // for (int i = 0; i < n; i++)
    // {
    //     rem = rem + gas[i] - cost[i];
    //     if (rem < minRem)
    //     {
    //         minRem = rem;
    //         index = i;
    //     }
    // }

    // return index + 1;
}

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2}; // 3
    // vector<int> gas = {2, 3, 4};
    // vector<int> cost = {3, 4, 3}; // -1

    int ans = canCompleteCircuit(gas, cost);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int n = gas.size();
    int m = cost.size();
    if (n == 1)
    {
        if (gas[0] >= cost[0])
            return 0;
        else
            return -1;
    }
    int i = 0, index = 0, count = 0, rem = 0;

    while (i < n)
    {
        if (gas[i] <= cost[i])
            i++;
        else
        {
            index = i;
            break;
        }
    }

    if (i == n)
        return -1;

    while (count < n && index < n)
    {
        rem = rem + gas[i] - cost[i];
        if (rem < 0)
        {
            index++;
            i = index - 1;
            count = -1;
            rem = 0;
        }
        if (i == n - 1)
            i = -1;
        i++;
        count++;
    }

    if (index == n)
        return -1;
    else
        return index;
}

int main()
{
    // vector<int> gas = {1, 2, 3, 4, 5};
    // vector<int> cost = {3, 4, 5, 1, 2}; // 3
    vector<int> gas = {2, 3, 4};
    vector<int> cost = {3, 4, 3}; // -1

    int ans = canCompleteCircuit(gas, cost);
    cout << ans;
    return 0;
}
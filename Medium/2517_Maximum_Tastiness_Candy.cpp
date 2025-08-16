#include <bits/stdc++.h>
using namespace std;

bool getCount(vector<int> &price, int mid, int k)
{
    int n = price.size();
    int val = price[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (price[i] - val >= mid)
        {
            val = price[i];
            count++;
            if (count == k)
                return true;
        }
    }
    return false;
}

int maximumTastiness(vector<int> &price, int k)
{
    int n = price.size();
    sort(price.begin(), price.end());
    int start = 0, end = price[n - 1] - price[0];
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        bool valid = getCount(price, mid, k);
        if (valid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return ans;
}

int main()
{
    vector<int> price = {13,5,1,8,21,2}; // 8
    int k = 3;
    // vector<int> price = {1, 3, 1}; // 2
    // int k = 2;
    // vector<int> price = {7, 7, 7, 7}; // 0
    // int k = 2;

    int ans = maximumTastiness(price, k);
    cout << ans;
    return 0;
}
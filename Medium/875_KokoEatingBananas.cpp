#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int start = 0, end = 0, mid, ans = 1;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += piles[i];
        end = max(end, piles[i]);
    }
    start = max(1LL, sum / h);

    cout << "Start " << start << '\n';
    cout << "End " << end << '\n';

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int total_time = 0;
        for (int i = 0; i < n; i++)
        {
            total_time += piles[i] / mid;
            if (piles[i] % mid)
                total_time++;
        }

        if (h >= total_time)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int result = minEatingSpeed(piles, h);

    cout << "\nResult is: " << result;

    return 0;
}
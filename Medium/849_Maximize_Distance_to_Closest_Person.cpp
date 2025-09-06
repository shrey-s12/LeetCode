#include <bits/stdc++.h>
using namespace std;

int maxDistToClosest(vector<int> &seats)
{
    int n = seats.size();
    int left = 0, right = 0, mid = 0;

    for (int i = 0; i < n; i++)
    {
        if (seats[i])
            break;
        left++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (seats[i])
            break;
        right++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (seats[i])
            count++;
    }

    int maxGap = 0, gap = 0;
    if (count >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (seats[i])
            {
                maxGap = max(maxGap, gap);
                gap = 0;
            }
            else
                gap++;
        }
    }
    mid = (maxGap + 1) / 2;
    return max({left, right, mid});
}

int main()
{
    // vector<int> seats = {1, 0, 0, 0, 1, 0, 1}; // 2
    // vector<int> seats = {1, 0, 0, 0}; // 3
    vector<int> seats = {0, 1}; // 1

    int ans = maxDistToClosest(seats);
    cout << ans;
    return 0;
}

// TC => O(n);
// SC => O(1);
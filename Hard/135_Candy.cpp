#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &ratings)
{
    int n = ratings.size();
    int TotalCandies = 0;
    vector<int> count(n, 1);

    for (int i = 1; i < n; i++)
    {
        if (ratings[i - 1] < ratings[i])
            count[i] = count[i - 1] + 1;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (ratings[i] > ratings[i + 1])
            count[i] = max(count[i], count[i + 1] + 1);
    }

    for (int i = 0; i < n; i++)
    {
        TotalCandies += count[i];
    }

    return TotalCandies;
}

int main()
{
    // vector<int> ratings = {1, 0, 2}; // 5
    // vector<int> ratings = {1,2,2}; // 4
    // vector<int> ratings = {1,2,87,87,87,2,1}; // 13
    vector<int> ratings = {1, 3, 4, 5, 2}; // 11

    int ans = candy(ratings);
    cout << ans;
    return 0;
}
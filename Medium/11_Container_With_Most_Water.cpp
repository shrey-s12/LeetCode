#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0, j = n - 1;
    int maxWater = 0;

    while (i < j)
    {
        int indexDiff = j - i;
        if (height[i] <= height[j])
            maxWater = max(maxWater, (indexDiff * height[i++]));
        else
            maxWater = max(maxWater, (indexDiff * height[j--]));
    }

    return maxWater;
}

int main()
{
    // vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // 49
    vector<int> height = {1, 1}; // 1

    int ans = maxArea(height);
    cout << ans;
    return 0;
}
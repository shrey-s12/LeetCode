#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();

    // // Space Complexity = o(1);
    int leftMax = 0, rightMax = 0, waterTrapped = 0;
    int maxHeight = height[0], index = 0;

    for (int i = 1; i < n; i++)
    {
        if (height[i] > maxHeight)
        {
            maxHeight = height[i];
            index = i;
        }
    }

    // Left Side
    for (int i = 0; i < index; i++)
    {
        leftMax = max(leftMax, height[i]);
        waterTrapped += leftMax - height[i];
    }

    // Right Side
    for (int i = n - 1; i > index; i--)
    {
        rightMax = max(rightMax, height[i]);
        waterTrapped += rightMax - height[i];
    }

    return waterTrapped;

    // // Space Complexity = o(n);
    // vector<int> leftMax(n, height[0]);
    // vector<int> rightMax(n, height[n - 1]);
    // for (int i = 1; i < n; i++)
    // {
    //     leftMax[i] = max(leftMax[i - 1], height[i]);
    // }

    // for (int i = n - 2; i >= 0; i--)
    // {
    //     rightMax[i] = max(rightMax[i + 1], height[i]);
    // }

    // int waterTrapped = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     waterTrapped += max(0, min(leftMax[i], rightMax[i]) - height[i]);
    //     // int minValue = min(leftMax[i], rightMax[i]);
    //     // int diff = minValue - height[i];
    //     // if (diff < 0)
    //     //     waterTrapped += 0;
    //     // else
    //     //     waterTrapped += diff;
    // }

    // return waterTrapped;
}

int main()
{
    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};

    int result = trap(height);

    cout << result << " units of rain water are being trapped";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maxDistance(vector<int> &position, int m)
{
    int n = position.size();
    sort(position.begin(), position.end());

    int start = 1, end = position[n - 1] - position[0], mid, ans = 1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int count = 1, basket = position[0];
        for (int i = 1; i < n; i++)
        {
            if (basket + mid <= position[i])
            {
                count++;
                basket = position[i];
            }
        }

        if (count >= m)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> position = {1, 2, 3, 4, 7};
    int m = 3;

    int result = maxDistance(position, m);

    cout << "\nResult is: " << result;

    return 0;
}
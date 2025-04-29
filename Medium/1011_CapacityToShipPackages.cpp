#include <bits/stdc++.h>
using namespace std;

int shipWithinDays(int weights[], int n, int days)
{

    int ans = -1, start = 0, end = 0, mid;
    for (int i = 0; i < n; i++)
    {
        if (weights[i] > start)
            start = weights[i];

        end += weights[i];
    }

    cout << "Start" << start << "\n";
    cout << "End" << end << "\n";

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int load = 0, count = 1;

        for (int i = 0; i < n; i++)
        {
            load += weights[i];

            if (load > mid)
            {
                count++;
                load = weights[i];
            }
        }

        if (count <= days)
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
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(weights) / sizeof(weights[0]);
    int days = 5;

    int result = shipWithinDays(weights, n, days);

    cout << "The Result is : " << result;

    return 0;
}
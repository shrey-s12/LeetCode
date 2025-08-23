#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    int f = 1, s = 2, temp;
    if (n == 1)
        return f;
    else if (n == 2)
        return s;

    else
    {
        for (int i = 3; i <= n; i++)
        {
            temp = f + s;
            f = s;
            s = temp;
        }
    }

    return temp;
}

int main()
{
    // int n = 3; // 3
    // int n = 4; // 5
    int n = 5; // 8

    int ans = climbStairs(n);
    cout << ans;
    return 0;
}
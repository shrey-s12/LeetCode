#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    long long q, ans = 0;

    while (n > 0)
    {
        q = n % 10;
        ans += q * q;
        n /= 10;

        if (n == 0 && ans < 5)
        {
            if (ans == 1)
                return true;
            else
                return false;
        }
        if (n == 0)
        {
            n = ans;
            ans = 0;
        }
    }
    return true;
}

int main()
{
    // int n = 19; // 1
    int n = 2; // 0

    bool ans = isHappy(n);
    cout << ans;
    return 0;
}
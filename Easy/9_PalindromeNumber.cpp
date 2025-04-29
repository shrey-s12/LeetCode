#include <bits/stdc++.h>
using namespace std;

bool palindromNumber(int x)
{
    if (x < 0)
        return false;

    int n = x, q, ans = 0;
    while (n > 0)
    {
        q = n % 10;
        if (ans > (INT_MAX / 10))
            return false;
        ans = ans * 10 + q;
        n /= 10;
    }

    if (x == ans)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool ans = palindromNumber(n);
    cout << ans;

    return 0;
}

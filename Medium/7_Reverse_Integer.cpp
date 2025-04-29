#include <bits/stdc++.h>
using namespace std;

void reverseInteger(int n)
{
    int q, ans = 0;
    while (n)
    {
        q = n % 10;
        if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
        {
            cout << 0;
            return;
        }
        ans = ans * 10 + q;
        n /= 10;
    }

    cout << ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    reverseInteger(n);

    return 0;
}
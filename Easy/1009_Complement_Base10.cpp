#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    int q, ans = 0, mul = 1;
    while (n > 0)
    {
        q = !(n % 2);
        ans = q * mul + ans;
        mul *= 2;
        n /= 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = bitwiseComplement(n);
    cout << ans;

    return 0;
}
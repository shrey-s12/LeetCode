#include <bits/stdc++.h>
using namespace std;

bool canWinNim(int n)
{
    if (n % 4 == 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool ans = canWinNim(n);
    cout << ans;

    return 0;
}
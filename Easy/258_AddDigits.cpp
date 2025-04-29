#include <bits/stdc++.h>
using namespace std;

void addDigits(int n)
{
    int q;

    while (n > 9)
    {
        int ans = 0;
        while (n > 0)
        {
            q = n % 10;
            ans += q;
            n /= 10;
        }
        n = ans;
    }

    cout << n;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    addDigits(n);

    return 0;
}
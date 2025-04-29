#include <bits/stdc++.h>
using namespace std;

void powerOfTwo(int n)
{
    int q;
    if (n < 1)
    {
        cout << false;
        return;
    }
    while (n > 1)
    {
        q = n % 2;
        if (q == 1)
        {
            cout << false;
            return;
        }
        n /= 2;
    }
    cout << true;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    powerOfTwo(n);

    return 0;
}
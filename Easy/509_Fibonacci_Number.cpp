#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // value => 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
    // index => 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    // int n = 4; // 3
    int n = 12; // 144

    int ans = fib(n);
    cout << ans;
    return 0;
}
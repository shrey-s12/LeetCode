#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor)
{

    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    if (dividend == INT_MIN && divisor == 1)
        return INT_MIN;

    long long dd = llabs(dividend);
    long long dv = llabs(divisor);

    int res = 0;
    while (dv <= dd)
    {
        long long sum = dv, count = 1;
        while (sum <= dd - sum)
        {
            sum += sum;
            count += count;
        }
        res += count;
        dd -= sum;
    }

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        return -res;

    return res;
}

int main(){
    // int dividend = 10, divisor = 3; // 3
    // int dividend = 7, divisor = -3; // -2
    int dividend = -2147483648, divisor = 2; // -1073741824

    int ans = divide(dividend, divisor);
    cout << ans;
    return 0;
}

// TC => O(log(dd/dv));


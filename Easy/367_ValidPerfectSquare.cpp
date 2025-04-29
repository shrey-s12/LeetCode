#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 2)
        return true;

    int start = 0, end = num / 2, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid == num / mid && num % mid == 0)
            return true;

        if (mid < num / mid)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    bool res = isPerfectSquare(num);
    cout << res;

    return 0;
}
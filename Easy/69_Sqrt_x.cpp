#include <bits/stdc++.h>
using namespace std;

// Using Binary Search Approach
int sqrtx(int n)
{
    if (n < 2)
        return n;

    int start = 0, end = n, mid, result;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == n / mid)
            return mid;

        if (mid < n / mid)
        {
            start = mid + 1;
            result = mid;
        }
        else
            end = mid - 1;
    }

    return result;
}

// Using Linear Search Approach
// void sqrtx(int n)
// {
//     if (n < 0)
//     {
//         cout << false;
//         return;
//     }
//     int m;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i < (INT_MAX / i))
//         {
//             m = i * i;
//             if (m == n)
//             {
//                 cout << i;
//                 return;
//             }
//             else if (m > n)
//             {
//                 cout << i - 1;
//                 return;
//             }
//             else
//                 continue;
//         }
//         else
//         {
//             cout << i - 1;
//             return;
//         }
//     }
// }

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = sqrtx(n);

    cout << result;

    return 0;
}
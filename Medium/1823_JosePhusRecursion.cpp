// Find the Winner of the Circular Game
#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k)
{
    vector<int> temp(n, 0);
    int count = 0;
    int index = n;

    for (int i = 0; i < n; i = (i + 1) % n)
    {
        if (!temp[i])
            count++;

        if (count == k)
        {
            temp[i] = 1;
            index--;
            count = 0;
        }

        if (index <= 1)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] == 0)
            return i + 1;
    }

    return 1;
}

int main()
{
    // int n = 5, k = 2; // 3
    // int n = 6, k = 5; // 1
    int n = 1, k = 1; // 1

    int ans = findTheWinner(n, k);
    cout << ans;
    return 0;
}
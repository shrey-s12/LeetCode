#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{

    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

string getPermutation(int n, int k)
{
    vector<int> arr;
    for (int i = 1; i <= n; i++)
        arr.push_back(i);

    string result = "";
    k = k - 1;

    for (int i = n; i >= 1; i--)
    {
        long long fact = factorial(i - 1);
        int index = k / fact;
        result += to_string(arr[index]);
        arr.erase(arr.begin() + index);
        k %= fact;
    }

    return result;
}

int main()
{
    // int n = 3, k = 3; // 213
    // int n = 4, k = 9; // 2314
    int n = 3, k = 1; // 123

    string ans = getPermutation(n, k);
    cout << ans;
    return 0;
}

// TC => O(n^2);
// SC => O(n);
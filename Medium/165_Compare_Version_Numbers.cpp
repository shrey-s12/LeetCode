#include <bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2)
{
    int n = version1.size();
    int m = version2.size();

    int i = 0, j = 0;
    int num1, num2;

    while (i < n || j < m)
    {

        num1 = 0, num2 = 0;
        while (i < n && version1[i] != '.')
            num1 = num1 * 10 + (version1[i++] - '0');

        while (j < m && version2[j] != '.')
            num2 = num2 * 10 + (version2[j++] - '0');

        if (num1 > num2)
            return 1;
        if (num1 < num2)
            return -1;

        i++, j++;
    }

    return 0;
}

int main()
{
    // string version1 = "1.2", version2 = "1.10"; // -1
    // string version1 = "1.01", version2 = "1.001"; // 0
    string version1 = "1.0", version2 = "1.0.0.0"; // 1

    int ans = compareVersion(version1, version2);
    cout << ans;
    return 0;
}
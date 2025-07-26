#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int freNum = arr[0], count = 0, maxLength = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == freNum)
            count++;
        else
        {
            if (freNum == count && maxLength < count)
                maxLength = count;

            count = 1;
            freNum = arr[i];
        }
    }

    if (freNum == count && maxLength < count)
        maxLength = count;

    return maxLength;
}

int main()
{
    // vector<int> arr = {2,2,3,4}; // 2
    // vector<int> arr = {1,2,2,3,3,3}; // 3
    vector<int> arr = {2, 2, 2, 3, 3}; // -1

    int ans = findLucky(arr);
    cout << ans;
    return 0;
}
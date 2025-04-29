#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    vector<int> result;

    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        int sum = numbers[start] + numbers[end];
        if (sum == target)
        {
            result.push_back(start + 1);
            result.push_back(end + 1);
            return result;
        }

        if (target > sum)
            start++;
        else
            end--;
    }

    return result;
}

int main()
{
    vector<int> numbers = {2, 7, 9, 11, 15};
    int target = 18;

    vector<int> result = twoSum(numbers, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
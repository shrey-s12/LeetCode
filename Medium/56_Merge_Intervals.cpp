#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    cout << "[";
    for (int i = 0; i < row; i++)
    {
        cout << "[";
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
            if (j < col - 1)
                cout << ", ";
        }
        cout << "]";
        if (i < row - 1 - 1)
            cout << ", ";
    }
    cout << "]";
}

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < n; i++)
    {
        if (ans.empty())
            ans.push_back(intervals[i]);
        else
        {
            vector<int> &temp = ans.back();
            int currStart = intervals[i][0];
            int previousEnd = temp[1];

            if (currStart <= previousEnd)
                temp[1] = max(intervals[i][1], previousEnd);
            else
                ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main()
{
    // vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}}; // [[1, 6], [8, 10][15, 18]]
    // vector<vector<int>> intervals = {{1, 4}, {4, 5}}; // [[1, 5]]
    vector<vector<int>> intervals = {{4, 7}, {1, 4}}; // [[1, 7]]

    vector<vector<int>> ans = merge(intervals);
    Print2DArrayVector(ans);
    return 0;
}

// TC => O(n log n);
// SC => O(n);
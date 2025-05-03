#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int top = 0, right = col - 1, bottom = row - 1, left = 0;
    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
            ans.push_back(matrix[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    vector<int> ans = spiralOrder(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
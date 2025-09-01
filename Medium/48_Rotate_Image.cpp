#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    Print2DArrayVector(matrix);

    // Reverse Col
    for (int j = 0; j < col; j++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    Print2DArrayVector(matrix);

    // Transpose Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    Print2DArrayVector(matrix);
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    rotate(matrix);
    return 0;
}

// 13 9 5 1
// 14 10 6 2
// 15 11 7 3
// 16 12 8 4
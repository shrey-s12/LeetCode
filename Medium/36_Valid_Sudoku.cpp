#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    int n = board.size();
    int m = board[0].size();
    vector<vector<int>> rowMat(9, vector<int>(9, 0));
    vector<vector<int>> colMat(9, vector<int>(9, 0));
    vector<vector<int>> gridMat(9, vector<int>(9, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '.')
                continue;

            int number = board[i][j] - '0';
            int k = i / 3 * 3 + j / 3;
            rowMat[i][number - 1]++;
            colMat[j][number - 1]++;
            gridMat[k][number - 1]++;

            if (rowMat[i][number - 1] == 2 || colMat[j][number - 1] == 2 || gridMat[k][number - 1] == 2)
                return false;
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool ans = isValidSudoku(board);
    cout << (ans ? "true" : "false");
    return 0;
}
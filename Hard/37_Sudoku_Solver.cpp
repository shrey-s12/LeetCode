#include <bits/stdc++.h>
using namespace std;

void Print2DArrayVector(vector<vector<char>> &arr)
{
    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
            cout << "------+-------+------" << endl;

        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0 && j != 0)
                cout << "| ";

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<char>> &board, int row, int col, char dig)
{
    // Horizontally
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
            return false;
    }

    // Vertically
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
            return false;
    }

    // 3*3 Grid
    int startRow = row / 3 * 3, startCol = col / 3 * 3;
    for (int i = startRow; i <= startRow + 2; i++)
    {
        for (int j = startCol; j <= startCol + 2; j++)
        {
            if (board[i][j] == dig)
                return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>> &board, int row, int col)
{
    if (row == 9)
        return true;

    int nextRow = row, nextCol = col + 1;
    if (nextCol == 9)
        nextRow = row + 1, nextCol = 0;

    if (board[row][col] != '.')
        return solve(board, nextRow, nextCol);

    for (char i = '1'; i <= '9'; i++)
    {
        if (isSafe(board, row, col, i))
        {
            board[row][col] = i;
            if (solve(board, nextRow, nextCol))
                return true;

            board[row][col] = '.';
        }
    }

    return false;
}

void solveSudoku(vector<vector<char>> &board)
{
    solve(board, 0, 0);
    Print2DArrayVector(board);
    return;
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

    solveSudoku(board);
    return 0;
}
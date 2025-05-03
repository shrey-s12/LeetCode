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

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> matrix(n, vector<int>(n));
    int top = 0, right = n - 1, bottom = n - 1, left = 0;
    int element = 1;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            matrix[top][j] = element;
            element++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = element;
            element++;
        }
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                matrix[bottom][j] = element;
                element++;
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = element;
                element++;
            }
            left++;
        }
    }

    return matrix;
}

int main()
{
    int n;
    cout << "Enter the size Of Matrix: ";
    cin >> n;

    vector<vector<int>> matrix = generateMatrix(n);

    Print2DArrayVector(matrix);
}
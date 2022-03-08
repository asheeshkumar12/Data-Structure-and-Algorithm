#include <bits/stdc++.h>
using namespace std;
bool check(int board[][9], int row, int col, int val)
{

    for (int k = 0; k < 9; k++)
    {
        if (board[row][k] == val)
        {
            return false;
        }
        if (board[k][col] == val)
        {
            return false;
        }
    }

    int rowFactor = row - (row % 3);
    int colFactor = col - (col % 3);

    for (int r = rowFactor; r < rowFactor + 3; r++)
    {
        for (int c = colFactor; c < colFactor + 3; c++)
        {
            if (board[r][c] == val)
            {
                return false;
            }
        }
    }
    return true;
}
bool helper(int board[][9], int row, int col)
{

    if (row == 9)
    {
        return true;
    }
    if (col == 9)
    {
        return helper(board, row + 1, 0);
    }
    if (board[row][col] != 0)
    {
        return helper(board, row, col + 1);
    }

    for (int k = 1; k <= 9; k++)
    {
        if (check(board, row, col, k))
        {
            board[row][col] = k;
            if (helper(board, row, col + 1))
            {
                return true;
            }
        }
        board[row][col] = 0;
    }
    return false;
}

bool sudokuSolver(int board[][9])
{
    return helper(board, 0, 0);
}

int main()
{

    int board[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
        }
    }

    if (sudokuSolver(board))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

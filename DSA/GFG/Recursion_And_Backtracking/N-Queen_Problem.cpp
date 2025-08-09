// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/recursion-and-backtracking-gfg-160/problem/n-queen-problem0315

// C++ program to find all solution of N queen problem
// using recursion
#include <iostream>
#include <vector>
using namespace std;

// Function to check if the current placement is safe
bool isSafe(int row, int col, int rows, int ld, int rd, int n)
{
    return !((rows >> row) & 1) &&
           !((ld >> (row + col)) & 1) &&
           !((rd >> (row - col + n)) & 1);
}

// Recursive function to generate all possible permutations
void nQueenUtil(int col, int n, vector<int> &board,
                vector<vector<int>> &res, int rows, int ld, int rd)
{

    // If all queens are placed, add into res
    if (col > n)
    {
        res.push_back(board);
        return;
    }

    // Try placing a queen in each row
    // of the current column
    for (int row = 1; row <= n; ++row)
    {

        // Check if it's safe to place the queen
        if (isSafe(row, col, rows, ld, rd, n))
        {

            // Place the queen
            board.push_back(row);

            // Recur to place the next queen
            nQueenUtil(col + 1, n, board,
                       res, rows | (1 << row),
                       (ld | (1 << (row + col))),
                       (rd | (1 << (row - col + n))));

            // Backtrack: remove the queen
            board.pop_back();
        }
    }
}

// Main function to find all distinct
// res to the n-queens puzzle
vector<vector<int>> nQueen(int n)
{
    vector<vector<int>> res;

    // Current board configuration
    vector<int> board;

    // Start solving from the first column
    nQueenUtil(1, n, board, res, 0, 0, 0);
    return res;
}

int main()
{
    int n = 4;
    vector<vector<int>> res = nQueen(n);

    for (int i = 0; i < res.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < n; ++j)
        {
            cout << res[i][j];
            if (j != n - 1)
                cout << " ";
        }
        cout << "]\n";
    }
    return 0;
}
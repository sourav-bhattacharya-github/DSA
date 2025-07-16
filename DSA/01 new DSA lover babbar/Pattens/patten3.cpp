#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;
    cout << n << endl;
    int row = 1, col = 1;

    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << col + row - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}

/*
5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

This code prints a pattern based on the input integer n, where each row contains numbers starting from the row number and increasing by one for each subsequent column in that row. The outer loop iterates through each row, while the inner loop prints the numbers for that row.
The output will be a right-angled triangle where the first row starts with 1, the second row starts with 2, and so on, with each row containing one more number than the previous row.
The time complexity of this code is O(n^2) because there are two nested loops,
*/
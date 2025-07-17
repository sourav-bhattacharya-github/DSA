#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;
    cout << n << endl;
    int i = 1, j;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char value = 'A' + i + j - 2;
            cout << value << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

This code prints a pattern of letters in a square format based on the input integer n.
The outer loop iterates through each row, while the inner loop prints letters starting from 'A' and incrementing based on the row and column indices.
The output will be a square grid of letters where each row starts with a letter corresponding to the row number, and each subsequent column in that row contains the next letter in the alphabet.
The time complexity of this code is O(n^2) because there are two nested loops,
*/
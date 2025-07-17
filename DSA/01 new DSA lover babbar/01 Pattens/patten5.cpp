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
        char value = 'A' + n - i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
E
D E
C D E
B C D E
A B C D E

This code prints a pattern of letters in a right-angled triangle format based on the input integer n.
The outer loop iterates through each row, while the inner loop prints letters starting from 'A' and incrementing based on the row number.
The output will be a right-angled triangle where the first row starts with the letter corresponding to the last row, and each subsequent row contains one more letter in alphabetical order.
The time complexity of this code is O(n^2) because there are two nested loops,

*/
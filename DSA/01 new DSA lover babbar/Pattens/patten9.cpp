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
        // print space
        for (int space = 1; space <= (n - i); space++)
        {
            cout << " ";
        }
        // print first  numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print second part of number
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << i - j;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
    1
   121
  12321
 1234321
123454321

This code prints a pyramid pattern of numbers based on the input integer n.
The outer loop iterates through each row, while the inner loops print spaces and numbers for each row.
The output will be a pyramid where the first row contains 1, the second row contains 121, and so on, with each subsequent row containing one more number in the increasing sequence followed by the decreasing sequence.
The time complexity of this code is O(n^2) because there are two nested loops,
*/
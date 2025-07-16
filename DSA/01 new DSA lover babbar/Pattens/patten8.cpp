#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n = 4;
    cin >> n;
    cout << n << endl;
    int i = 1;

    while (i <= n)
    {
        // print space
        for (int space = 1; space <= (i - 1); space++)
        {
            cout << " ";
        }
        // print star
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j + i - 1;
        }

        cout << endl;
        i++;
    }
    return 0;
}

/*
12345
 2345
  345
   45
    5

This code prints a right-angled triangle pattern of numbers based on the input integer n.
The outer loop iterates through each row, while the inner loops print spaces and numbers for each row.
The output will be a right-angled triangle where the first row starts with 1, the second row starts with 2, and so on, with each subsequent row containing one less number than the previous row.
The time complexity of this code is O(n^2) because there are two nested loops,
*/
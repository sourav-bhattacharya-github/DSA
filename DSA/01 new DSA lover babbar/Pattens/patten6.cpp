#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;
    cout << n << endl;
    int i = 1;

    while (i <= n)
    {
        // print space
        for (int space = 1; space <= (n - i); space++)
        {
            cout << " ";
        }
        // print star
        for (int star = 1; star <= i; star++)
        {
            cout << "*";
        }

        cout << endl;
        i++;
    }
    return 0;
}

/*
    *
   **
  ***
 ****
*****

This code prints a right-angled triangle pattern of asterisks based on the input integer n.
The outer loop iterates through each row, while the inner loops print spaces and asterisks for each row.
The output will be a right-angled triangle where the number of asterisks in each row corresponds to the row number, and spaces are added to align the triangle to the right.
The time complexity of this code is O(n^2) because there are two nested loops,
*/
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
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
* * * * *
* * * *
* * *
* *
*

This code prints a right-angled triangle pattern of asterisks based on the input integer n.
The outer loop iterates through each row, while the inner loop prints asterisks for each column in that row.
The output will be a right-angled triangle where the first row contains n asterisks and the last row contains 1 asterisk.
The time complexity of this code is O(n^2) because there are two nested loops, where the outer loop runs n times and the inner loop runs decreasingly from n to 1.
*/
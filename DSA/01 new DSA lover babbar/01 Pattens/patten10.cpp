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
        // 1st triangle numbers

        j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        // 2nd triangle stars
        j = 1;
        while (j <= 2 * (i - 1))
        {
            cout << "*";
            j++;
        }
        // 3rd triangle numbers
        j = 1;
        while (j <= (n - i + 1))
        {
            cout << (n - i - j + 2);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
1st triangle numbers

12345
1234
123
12
1

2nd triangle stars
**
****
******
********

3rd triangle numbers
54321
4321
321
21
1

final result---------

1234554321
1234**4321
123****321
12******21
1********1

This code prints a pattern that combines numbers and stars in a specific format based on the input integer n.
The outer loop iterates through each row, while the inner loops print numbers and stars for each row.
The output will be a combination of numbers and stars where the first part contains numbers in descending order, the second part contains stars, and the third part contains numbers in ascending order.
The time complexity of this code is O(n^2) because there are three nested loops, each iterating up to n in the worst case.
The space complexity is O(1) as we are using only a constant amount of extra space.
*/
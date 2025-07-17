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
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
        /* code */
    }

    return 0;
}
/*```
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```*/
// This code prints a pattern of numbers in a square format based on the input integer n.
// The outer loop iterates through each row, while the inner loop prints numbers from 1 to n for each row.
// The output will be a square grid of numbers where each row contains the numbers from 1 to n, repeated for n rows.
// The time complexity of this code is O(n^2) because there are two nested loops
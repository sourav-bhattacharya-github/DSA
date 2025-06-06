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

*/
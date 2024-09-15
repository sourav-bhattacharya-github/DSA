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
#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;
    cout << n << endl;
    int row = 1, col = 1;

    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << col + row - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
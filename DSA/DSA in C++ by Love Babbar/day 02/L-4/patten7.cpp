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
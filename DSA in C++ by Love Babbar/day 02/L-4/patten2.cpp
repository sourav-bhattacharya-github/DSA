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
        while (j <= i)
        {
            cout << " * ";
            j++;
        }
        cout << endl;

        i++;
    }
    return 0;
}
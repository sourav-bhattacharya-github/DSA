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
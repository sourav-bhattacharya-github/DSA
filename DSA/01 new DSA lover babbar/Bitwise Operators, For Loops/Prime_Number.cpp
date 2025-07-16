#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;

    bool flack = 1;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flack = 0;
            // cout << "not Prime Number";
            break;
        }
    }

    if (flack == 0)
    {
        cout << n << " number is not Prime " << endl;
    }
    else if (flack == 1)
    {
        cout << n << " number is  Prime " << endl;
    }

    return 0;
}
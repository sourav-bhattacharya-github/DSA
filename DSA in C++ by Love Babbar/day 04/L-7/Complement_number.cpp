#include <iostream>
using namespace std;
int main()
{
    cout << "enter a interger number " << endl;

    int n;
    cin >> n;
    int m = n;

    // edge case
    if (n == 0)
    {
        cout << "Complement Number:  1";
        return 0;
    }

    int mask = 0;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    int ans = (~n) & mask;
    cout << "The complemant Number : " << ans << endl;

    return 0;
}
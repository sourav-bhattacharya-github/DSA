#include <iostream>

using namespace std;

int main()
{

    cout << "Enter a integer number : " << endl;
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digite = n % 10;
        if (ans > INT32_MAX / 10 || ans < INT32_MIN / 10)
        {
            cout << " retuen 0";
            return 0;
        }
        ans = ans * 10 + digite;
        n /= 10;
    }

    cout << " the Reverse Number : " << ans << endl;
    return 0;
}
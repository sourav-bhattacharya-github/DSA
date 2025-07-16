// LeetCode 1281: Subtract the product and Sum of Digits of an Integar
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer number" << endl;
    int n;
    cin >> n;
    int product = 1, sum = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }

    cout << "Subtract the product and sum of Digits is = " << product - sum << endl;
    return 0;
}
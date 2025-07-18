#include <iostream>
using namespace std;

int main()

{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe" << endl;
    int n;
    cin >> n;

    bool flack = 1;

    for (int i = 2; i * i < n; i++)
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
// This code checks if a given integer n is a prime number.
// It iterates from 2 to the square root of n, checking if n is divisible by any of these numbers.
// If it finds a divisor, it sets a flag to indicate that n is not prime.
// If no divisors are found, it concludes that n is prime.
// The time complexity of this code is O(sqrt(n)), as it only checks divisibility
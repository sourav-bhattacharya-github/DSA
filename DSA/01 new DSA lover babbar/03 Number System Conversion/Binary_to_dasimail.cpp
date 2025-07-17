#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Enter a Binarry number :  " << endl;

    int bi;
    cin >> bi;
    int dacimail = 0, i = 0;

    while (bi != 0)
    {
        int bit = bi % 10;
        dacimail = bit * pow(2, i) + dacimail;
        bi /= 10;
        i++;
    }

    cout << "the new Number : " << dacimail;
    return 0;
}
// This code converts a binary number to its decimal equivalent.
// It takes a binary number as input, processes each bit, and calculates the decimal value using the formula bit * 2^i, where i is the position of the bit.
// The final result is printed as the decimal equivalent of the binary input.
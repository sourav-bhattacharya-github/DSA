// FInd the Number of Bit

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a integer numer " << endl;
    int n;
    cin >> n;
    int count;

    while (n != 0)
    {
        if (n & 1 == 1) // check last bit
        {
            count++;
        }
        n = n >> 1;
    }

    cout << "The numer of 1 bit : " << count << endl;

    return 0;
}
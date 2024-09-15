#include <iostream>

using namespace std;

int count_one_bit(int n)
{
    // find the number of 1 bits
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main()
{
    cout << " Enter two interger number : ";
    int a, b;
    cin >> a >> b;

    int count = 0;
    count += count_one_bit(a);
    count += count_one_bit(b);

    cout << "the number " << a << " and " << b << " numbre of  1 bit is :   " << count << endl;

    return 0;
}
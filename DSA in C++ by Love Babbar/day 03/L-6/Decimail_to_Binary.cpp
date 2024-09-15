// Convert binarray to  dasimal

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << " Enter a integer number : ";

    int n;
    cin >> n;
    int result = 0, i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        result = bit * pow(10, i) + result;

        n >>= 1;
        i++;
    }

    cout << " The Binary " << result << endl;
    return 0;
}
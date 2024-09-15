// not complect

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

    int un = -n;
    cout << un << endl;

    un = ~un;
    cout << un << endl;
    un = un + 1;
    cout << "the 2's compimant" << un;
    // while (un != 0)
    // {
    //     int bit = un & 1;
    //     result = bit * pow(10, i) + result;

    //     un >>= 1;
    //     i++;
    // }

    cout << " The Binary " << result << endl;
    return 0;
}
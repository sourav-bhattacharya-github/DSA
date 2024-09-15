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
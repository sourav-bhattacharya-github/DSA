#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34
int natural_sum(int n)
{
    //  sum = n/2( 2a + (n-1)d)
    // for natural number N_sun = (n/2) (2*1 + (n-1)*1) = n( 1+n) = (n + n*n)/2

    int sum = (n + (n * n)) / 2;
    return sum;
}
int main()
{
    cout << "Enter a nth number of Natural number sum :  ";

    int n;
    cin >> n;
    cout << "The Natural Sum  of " << n << " position is : " << natural_sum(n) << endl;
    return 0;
}
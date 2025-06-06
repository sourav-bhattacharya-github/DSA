// https://leetcode.com/problems/sqrtx/solutions/5690922/easy-explained-solution-beats-100-in-sqrt-x/
#include <iostream>
using namespace std;

int squareInteger(int n)
{
    int s = 0,
        e = n,
        mid = s + (e - s) / 2,
        ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (n == square)
        {
            return mid;
        }
        else if (n > square)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int integerRoot)
{
    double factor = 1;
    double ans = integerRoot;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the number (+ve) : ";
    int n;
    cin >> n;
    int tempSol = squareInteger(n);
    cout << "The Square root of " << n << " : " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a +ve interger Number : " << endl;
    int n;
    cin >> n;

    int ans = 1;
    for (int i = 0; i < 30; i++)
    {
        if (ans == n)
        {
            cout << " This number " << n << " is exist in power of 2 " << endl;
            break;
        }
        if (ans < INT32_MAX / 2)
            ans = ans * 2;
    }
}

// 1:11:31
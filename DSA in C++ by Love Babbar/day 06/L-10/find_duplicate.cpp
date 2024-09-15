#include <iostream>
using namespace std;

int find_duplecate_byAP(int arr[], int n)
{
    int sum = 0, ans;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    ans = sum - (n * (n - 1) / 2);
    return ans;
}

int find_duplecate_byXOR(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        // cout << ans << endl;
    }

    // cout << "The ans " << ans << endl;
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
        // cout << ans << endl;
    }
    return ans;
}

int main()
{

    int arr[7] = {6, 4, 5, 3, 2, 1, 3};
    // cout << "The Duplecate element : " << find_duplecate(arr, 7) << endl;
    cout << find_duplecate_byXOR(arr, 7) << endl;
    cout << find_duplecate_byAP(arr, 7) << endl;

    // int s;
    // s = 0 ^ 6;
    // cout << s << endl;
    // s = s ^ 4;
    // cout << s << endl;
    // s = s ^ 5;
    // cout << s << endl;
    // s = s ^ 3;
    // cout << s << endl;
    // s = s ^ 2;
    // cout << s << endl;
    // s = s ^ 1;
    // cout << s << endl;
    // s = s ^ 3;
    // cout << s << endl;
    return 0;
}

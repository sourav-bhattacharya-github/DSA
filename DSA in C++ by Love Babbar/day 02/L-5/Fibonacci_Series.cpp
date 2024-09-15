#include <iostream>
using namespace std;

int main()
{
    cout << "print patten" << endl;
    cout << "Enter a integer Numbe (1 to 47)" << endl;
    int n;
    cin >> n;
    cout << n << endl;

    int first_number = 0, second_number = 1, find_number;
    for (int i = 1; i <= n; i++)
    {
        cout << first_number << "  ";
        find_number = first_number + second_number; // find new number
        first_number = second_number;
        second_number = find_number;
    }

    return 0;
}
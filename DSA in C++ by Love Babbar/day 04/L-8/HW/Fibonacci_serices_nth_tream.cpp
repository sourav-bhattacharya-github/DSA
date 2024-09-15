#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34
int show_fibonacci(int n)
{
    int frist_number = 0, second_number = 1, next_number;
    for (int i = 1; i <= (n - 2); i++)
    {
        next_number = frist_number + second_number;
        frist_number = second_number;
        second_number = next_number;
    }
    return next_number;
}
int main()
{
    cout << "Enter a position of Fibonacci serices : ";

    int n;
    cin >> n;
    cout << "The Fibonacci Serices " << n << " position number is : " << show_fibonacci(n) << endl;
    return 0;
}
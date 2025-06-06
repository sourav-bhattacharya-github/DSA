// https://www.naukri.com/code360/problems/bubble-sort_980524
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{ // Write your code here.
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool isSwap = false; // if arr alredy sort then brack the loop
        for (int j = 0; j < n - i; j++)
        {
            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (isSwap == false)
        {
            break;
        }
    }
}
int main()
{
    cout << "Enter Arry size (n) in +ve integer : ";
    int n = 1;
    cin >> n;
    int arr[n];
    cout << "Entre " << n << " element in Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Bubble Sort
    bubbleSort(arr, n);

    cout << "the Sort Array by Bubble Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
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
    // Insertion Sort
    insertionSort(arr, n);

    cout << "the Sort Array by Insertion Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

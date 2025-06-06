#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1; //*** hear n - 1 hobe beacuse n is the number of element and end index in n-1
    int tem;
    while (start <= end)
    {
        // swap(arr[start], arr[end]);
        int tem = arr[start];
        arr[start] = arr[end];
        arr[end] = tem;

        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {15, 20, 8, 2, 100, 6};

    int arr2[5] = {14, -4, 55, 625, 5};

    reverseArray(arr1, 6);
    reverseArray(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;
}
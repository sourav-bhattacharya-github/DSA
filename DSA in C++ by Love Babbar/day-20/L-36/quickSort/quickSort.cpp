#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // right place of element
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    if (s >= e)
        return;

    // make a partition
    int p = partition(arr, s, e);

    // left sort
    quickSort(arr, s, p - 1);

    // right sort
    quickSort(arr, p + 1, e);
}

int main()
{
    cout << "hello" << endl;
    int arr[6] = {5, 2, 1, 9, 4, 3};
    int n = 6;

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
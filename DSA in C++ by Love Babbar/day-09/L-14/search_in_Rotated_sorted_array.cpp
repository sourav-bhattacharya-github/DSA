#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {7, 10, 15, 1, 3};
    int key = 15;
    int pivot = getPivot(arr, 5);
    cout << "Pivot : " << pivot << endl;
    int ans;
    if (key >= arr[pivot] && key <= arr[4])
    {
        ans = binarySearch(arr, pivot, 5, key);
    }
    else
    {
        ans = binarySearch(arr, 0, pivot - 1, key);
    }

    cout << "the index : " << ans << endl;
    return 0;
}
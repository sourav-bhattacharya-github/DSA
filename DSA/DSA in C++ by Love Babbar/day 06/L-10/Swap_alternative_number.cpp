#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    int arr1[8] = {15, 8, 10, -4, 60, 625, 125, 95};
    int arr2[5] = {70, 5, 64, 512, 1024};

    swapAlternate(arr1, 8);
    printArray(arr1, 8);

    cout << endl;

    swapAlternate(arr2, 5);
    printArray(arr2, 5);
    return 0;
}
#include <iostream>

using namespace std;

// rreturn max value in th egiven Array
int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Return min value in the given array
int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    cout << " Enter size of array (0 to 100) : ";
    int size;
    cin >> size;

    cout << "Enter " << size << " element in Array : ";
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The max value : " << getMax(arr, size) << endl;
    cout << "The min valur : " << getMin(arr, size) << endl;
    return 0;
}
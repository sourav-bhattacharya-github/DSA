#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    //**  this mid work perfactly but if start = 2^31 - 1 and end = 2^31 then mid = (start + end) > 2^31 -1 ;  it give error */
    //** int mid = (start + end) / 2; */
    // SO, we use this----
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 6, 10);
    int oddIndex = binarySearch(odd, 5, 7);

    cout << "The Index of 10 in even array : " << evenIndex << endl;
    cout << "The Index of 7 in odd array : " << oddIndex << endl;

    return 0;
}
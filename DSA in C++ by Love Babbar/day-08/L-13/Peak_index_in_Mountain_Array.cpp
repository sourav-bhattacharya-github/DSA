//**Find the Peak Index in a Mountain Array */
//** LeetCode : "https://leetcode.com/problems/peak-index-in-a-mountain-array/description/" */
#include <iostream>
using namespace std;

// also do by...
// int peakIndexInMountainArray(int arr[], int size)
// {
//     int i = 0;
//     while (arr[i] < arr[i + 1])
//     {
//         i++;
//     }
//     return i;
// }

int peakIndexInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] >= arr[mid + 1])
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return end;
}

int main()
{
    int even[8] = {2, 5, 8, 12, 25, 10, 6, 0};
    int odd[7] = {3, 100, 25, 6, 2, 0, -6};

    cout << "In even Array the Peak element Index : " << peakIndexInMountainArray(even, 8) << endl;
    cout << "In odd Array the Peak element Index : " << peakIndexInMountainArray(odd, 7) << endl;

    return 0;
}
// ** Find the First and Last position of an Element in Sorted Array*/
//** Code360 by Coding ninjas : "https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549" */
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // if posible it mid not start  index of the key
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            ans = -1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            ans = -1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // if posible it mid not last  index of the key
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            ans = -1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            ans = -1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int even[8] = {2, 5, 5, 10, 10, 10, 15, 20};
    int odd[7] = {0, 5, 6, 6, 6, 6, 6};

    cout << "In the even Array the first occurant of 10 : " << firstOcc(even, 8, 10) << "; and Last of : " << lastOcc(even, 8, 10) << endl;
    cout << "In the odd Array the first occurant of 10 : " << firstOcc(odd, 7, 6) << "; and Last of : " << lastOcc(odd, 7, 6) << endl;
}

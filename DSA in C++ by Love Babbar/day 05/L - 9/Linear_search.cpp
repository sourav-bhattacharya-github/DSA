#include <iostream>
using namespace std;
bool seach(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << "Ente key : ";
    int key;
    cin >> key;

    int arr[10] = {5,
                   15,
                   0,
                   20,
                   -5,
                   18,
                   225,
                   625,
                   1024,
                   512};

    bool found = seach(arr, 10, key);
    if (found)
    {
        cout << "Tne key Present in The Array " << endl;
    }
    else
    {
        cout << "The key is Absent in the Array " << endl;
    }
    return 0;
}

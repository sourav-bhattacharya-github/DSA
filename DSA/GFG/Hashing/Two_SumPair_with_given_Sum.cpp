// Link: https://www.geeksforgeeks.org/two-sum-problem/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int> &arr, int target)
{

    sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;

    // Iterate while left pointer
    // is less than right
    while (left < right)
    {
        int sum = arr[left] + arr[right];

        // Check if the sum matches the target
        if (sum == target)
            return true;
        else if (sum < target)

            // Move left pointer to the right
            left++;
        else

            // Move right pointer to the left
            right--;
    }
    // If no pair is found
    return false;
}

int main()
{
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    if (twoSum(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}
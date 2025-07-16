// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/count-pairs-whose-sum-is-less-than-target

// C++ program to count pairs with sum less
// than target using two pointers technique

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int> &arr, int target)
{

    // Sort the array to use two pointer technique
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    int cnt = 0;

    // Two pointer technique
    while (left < right)
    {
        int sum = arr[left] + arr[right];

        // If the sum is less than target, then arr[left]
        // will form a valid pair with every element
        // from index left + 1 to right.
        if (sum < target)
        {
            cnt += right - left;
            left++;
        }
        else
        {
            right--;
        }
    }

    return cnt;
}

int main()
{
    vector<int> arr = {2, 1, 8, 3, 4, 7, 6, 5};
    int target = 7;
    cout << countPairs(arr, target);
    return 0;
}

// Time Complexity: O(N log N) for sorting + O(N) for the two-pointer traversal = O(N log N)
// Space Complexity: O(1) as we are using only a constant amount of extra space.
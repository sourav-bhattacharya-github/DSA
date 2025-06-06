// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include <iostream>
#include <queue>

class Solution
{
public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k)
    {
        priority_queue<int> pq;

        // step 1:
        for (int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }

        // step 2 :
        for (int i = k; i < arr.size(); i++)
        {
            if (arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }

        return pq.top();
    }
};
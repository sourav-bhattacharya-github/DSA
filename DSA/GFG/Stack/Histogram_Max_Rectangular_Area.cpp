// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/stack-gfg-160/problem/maximum-rectangular-area-in-a-histogram-1587115620

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int getMaxArea(vector<int> &arr)
{
    int n = arr.size();
    stack<int> s;
    int res = 0;
    int tp, curr;
    for (int i = 0; i < n; i++)
    {

        while (!s.empty() && arr[s.top()] >= arr[i])
        {

            // The popped item is to be considered as the
            // smallest element of the Histogram
            tp = s.top();
            s.pop();

            // For the popped item previous smaller element is
            // just below it in the stack (or current stack top)
            // and next smaller element is i
            int width = s.empty() ? i : i - s.top() - 1;

            res = max(res, arr[tp] * width);
        }
        s.push(i);
    }

    // For the remaining items in the stack, next smaller does
    // not exist. Previous smaller is the item just below in
    // stack.
    while (!s.empty())
    {
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }

    return res;
}

// ============================================================================
// Driver program to test above functions
int main()
{
    vector<int> arr = {60, 20, 50, 40, 10, 50, 60};
    cout << getMaxArea(arr);
    return 0;
}
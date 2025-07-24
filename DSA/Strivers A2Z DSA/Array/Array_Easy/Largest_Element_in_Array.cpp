// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution
{
public:
    int largest(vector<int> &arr)
    {
        // code here

        int largestElement = INT_MIN;

        for (auto val : arr)
        {
            largestElement = max(largestElement, val);
        }

        return largestElement;
    }
};

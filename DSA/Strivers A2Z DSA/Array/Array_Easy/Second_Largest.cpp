// LINK: https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        // Frist find larst value
        int largest = -1;
        int secondLargest = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
                largest = arr[i];
        }

        // now find second largest value
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > secondLargest && arr[i] != largest)
                secondLargest = arr[i];
        }

        return secondLargest;
    }
};
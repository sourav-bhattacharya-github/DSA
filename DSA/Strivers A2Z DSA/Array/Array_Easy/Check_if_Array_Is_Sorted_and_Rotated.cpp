// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();

        int largeCount = 0;

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
                largeCount++;
        }

        if (nums[0] < nums[n - 1])
            largeCount++;

        return largeCount <= 1 ? true : false;
    }
};
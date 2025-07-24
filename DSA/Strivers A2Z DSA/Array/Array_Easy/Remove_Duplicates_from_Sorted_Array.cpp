// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int n = nums.size();
        int index = 0;

        for (int i = 1; i < n; ++i)
        {
            // this means the current element is seen for the first time
            if (nums[index] != nums[i])
            {
                nums[index + 1] = nums[i];
                index++;
            }
        }

        return (index + 1);
    }
};
// Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/trapping-rain-water-1587115621

class Solution
{
public:
    int maxWater(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int ans = 0;

        // set two pointer at left and right
        int left = 0, right = n - 1;

        // set the left max building and right max building
        int leftMax = 0, rightMax = 0;

        while (left < right)
        {

            // cal the left max building
            leftMax = max(leftMax, arr[left]);

            // cal the right max building
            rightMax = max(rightMax, arr[right]);

            // which side the building is smaller
            if (leftMax < rightMax)
            {
                ans += leftMax - arr[left];
                left++;
            }
            else
            {
                ans += rightMax - arr[right];
                right--;
            }
        }

        return ans;
    }
};
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int i, max = 0, c = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1 && i != 0)
            {
                if (nums[i - 1] == nums[i])
                    c++;
                else
                {
                    c = 0;
                    c++;
                }
            }
            else if (i == 0 && nums[i] == 1)
                c++;
            if (max < c)
                max = c;
        }
        return max;
    }
};
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int c = 0, max, res;
        if (nums.size() > 0)
        {
            max = 1;
            res = nums[0];
        }
        else
        {
            max = 0;
            res = 0;
        }
        if (nums.size() > 1)
        {
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] != nums[i - 1])
                    c = 0;
                c++;
                if (c > max)
                {
                    max = c;
                    res = nums[i];
                }
            }
        }
        return res;
    }
};
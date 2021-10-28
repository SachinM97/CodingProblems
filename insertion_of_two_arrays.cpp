// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        int i;
        std::vector<int>::iterator it;
        std::vector<int>::iterator it1;
        if (nums1.size() <= nums2.size())
        {
            for (i = 0; i < nums1.size(); i++)
            {
                it = std::find(nums2.begin(), nums2.end(), nums1[i]);
                it1 = std::find(res.begin(), res.end(), nums1[i]);
                if (it != nums2.end() && it1 == res.end())
                    res.push_back(nums1[i]);
            }
        }
        else
        {
            for (i = 0; i < nums2.size(); i++)
            {
                it = std::find(nums1.begin(), nums1.end(), nums2[i]);
                it1 = std::find(res.begin(), res.end(), nums2[i]);
                if (it != nums1.end() && it1 == res.end())
                    res.push_back(nums2[i]);
            }
        }
        return res;
    }
};
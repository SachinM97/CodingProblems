// Problem statement
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
// Example 3:

// Input: nums1 = [0,0], nums2 = [0,0]
// Output: 0.00000
// Example 4:

// Input: nums1 = [], nums2 = [1]
// Output: 1.00000
// Example 5:

// Input: nums1 = [2], nums2 = []
// Output: 2.00000

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> merged_arr(nums1.size() + nums2.size());
        // for(int i=0; i<nums1.size(); i++)
        //     merged_arr.push_back(nums1[i]);
        // for(int i=0; i<nums2.size(); i++)
        //     merged_arr.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged_arr.begin());
        // sort(merged_arr.begin(), merged_arr.end());
        if (merged_arr.size() % 2 != 0)
            return merged_arr[(merged_arr.size() / 2)];
        else
        {
            float res = (merged_arr[(merged_arr.size() / 2) - 1] + merged_arr[(merged_arr.size() / 2)]);
            return res / 2;
        }
    }
};
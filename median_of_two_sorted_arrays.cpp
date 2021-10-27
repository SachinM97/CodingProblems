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
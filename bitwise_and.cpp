// Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

// Example 1:

// Input: left = 5, right = 7
// Output: 4
// Example 2:

// Input: left = 0, right = 0
// Output: 0
// Example 3:

// Input: left = 1, right = 2147483647
// Output: 0

typedef long long int LL;
class Solution
{
public:
    int msb(LL num)
    {
        int msb_pos = -1;
        while (num)
        {
            num = num >> 1;
            msb_pos++;
        }
        return msb_pos;
    }
    int rangeBitwiseAnd(int left, int right)
    {
        LL res = 0;
        while (left && right)
        {
            int loc_left = msb(left);
            int loc_right = msb(right);

            if (loc_left != loc_right)
                break;

            LL msb_val = (1 << loc_left);
            res = res + msb_val;

            left = left - msb_val;
            right = right - msb_val;
        }
        return res;
    }
};
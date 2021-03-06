// Problem statement
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
// Example 4:

// Input: x = 0
// Output: 0

class Solution
{
public:
    int reverse(int x)
    {
        long int d = 0, mod, res = 0;
        while (x)
        {
            mod = x % 10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && mod > 7))
                return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && mod < -8))
                return 0;
            res = mod + (10 * res);
            x = x / 10;
        }
        return res;
    }
};
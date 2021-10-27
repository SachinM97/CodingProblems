// Given an integer x, return true if x is palindrome integer.

// An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

// Example 1:

// Input: x = 121
// Output: true
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
// Example 4:

// Input: x = -101
// Output: false

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else if (x >= 0 && x <= 9)
            return true;
        else if (x >= 10 && x <= (pow(2, 31) - 1))
        {
            long int res = 0, y, d;
            y = x;
            while (x)
            {
                d = x % 10;
                res = d + (res * 10);
                x = x / 10;
            }
            if (y == res)
                return true;
            else
                return false;
        }
        else
            return false;
    }
};
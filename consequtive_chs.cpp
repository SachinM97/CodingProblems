// The power of the string is the maximum length of a non-empty substring that contains only one unique character.

// Given a string s, return the power of s.

// Example 1:

// Input: s = "leetcode"
// Output: 2
// Explanation: The substring "ee" is of length 2 with the character 'e' only.
// Example 2:

// Input: s = "abbcccddddeeeeedcba"
// Output: 5
// Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
// Example 3:

// Input: s = "triplepillooooow"
// Output: 5
// Example 4:

// Input: s = "hooraaaaaaaaaaay"
// Output: 11
// Example 5:

// Input: s = "tourist"
// Output: 1

class Solution
{
public:
    int maxPower(string s)
    {
        int f[26] = {0}, i;
        int max = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
            int x = s[i];
            if (f[x - 97] != 0)
            {
                if (s[i - 1] == s[i])
                    f[x - 97]++;
                else
                {
                    f[x - 97] = 0;
                    f[x - 97]++;
                }
            }
            else
                f[x - 97]++;
            if (max < f[x - 97])
                max = f[x - 97];
        }
        return max;
    }
};
// Given a string s, find the longest palindromic subsequence's length in s.

// A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

// Example 1:

// Input: s = "bbbab"
// Output: 4
// Explanation: One possible longest palindromic subsequence is "bbbb".
// Example 2:

// Input: s = "cbbd"
// Output: 2
// Explanation: One possible longest palindromic subsequence is "bb".

class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int m = s.length();
        int res[m + 1][m + 1];

        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0)
                    res[0][j] = 0;
                else if (j == 0)
                    res[i][0] = 0;
                else
                {
                    if (s[i - 1] == s1[j - 1])
                        res[i][j] = res[i - 1][j - 1] + 1;
                    else
                        res[i][j] = max(res[i - 1][j], res[i][j - 1]);
                }
            }
        }
        return res[m][m];
    }
};
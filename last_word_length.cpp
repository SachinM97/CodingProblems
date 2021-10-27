// Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        reverse(s.begin(), s.end());
        int c = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ' ')
            {
                if (s.length() == 1)
                    break;
                if (c == 0)
                    continue;
                break;
            }
            c++;
        }
        return c;
    }
};
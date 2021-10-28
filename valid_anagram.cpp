// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

class Solution
{
public:
    string sortString(string &str)
    {
        sort(str.begin(), str.end());
        return str;
    }
    bool isAnagram(string s, string t)
    {
        s = sortString(s);
        t = sortString(t);
        if (s.length() < t.length())
        {
            string temp = s;
            s = t;
            t = temp;
        }
        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] != t[i])
                return false;
        return true;
    }
};
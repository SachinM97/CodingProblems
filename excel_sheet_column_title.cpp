// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28
// ...

// Example 1:

// Input: columnNumber = 1
// Output: "A"
// Example 2:

// Input: columnNumber = 28
// Output: "AB"
// Example 3:

// Input: columnNumber = 701
// Output: "ZY"
// Example 4:

// Input: columnNumber = 2147483647
// Output: "FXSHRXW"

#define MAX 50
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        char str[MAX];
        int i = 0;
        while (columnNumber > 0)
        {
            int rem = columnNumber % 26;
            if (rem == 0)
            {
                str[i++] = 'Z';
                columnNumber = (columnNumber / 26) - 1;
            }
            else
            {
                str[i++] = (rem - 1) + 'A';
                columnNumber = columnNumber / 26;
            }
        }
        str[i] = '\0';
        reverse(str, str + strlen(str));
        return str;
    }
};
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
// Example 4:

// Input: s = "([)]"
// Output: false
// Example 5:

// Input: s = "{[]}"
// Output: true

class Solution
{
public:
    bool isValid(string s)
    {
        if (1 <= s.length() <= 10000)
        {
            stack<char> stack;
            int i;
            for (i = 0; s[i] != '\0'; i++)
            {
                if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && stack.empty())
                    return false;
                if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                    stack.push(s[i]);
                else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
                {
                    char top = stack.top();
                    if ((s[i] == ')' && top == '(') || s[i] == '}' && top == '{' || s[i] == ']' && top == '[')
                        stack.pop();
                    else
                        stack.push(s[i]);
                }
            }
            if (stack.empty())
                return true;
            else
                return false;
        }
        return false;
    }
};
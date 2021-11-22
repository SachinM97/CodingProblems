// # Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// # Example 1:

// # Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// # Output: 6
// # Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// # Example 2:

// # Input: height = [4,2,0,3,2,5]
// # Output: 9

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int ans = 0, current = 0;
        stack<int> st;
        while (current < height.size())
        {
            while (!st.empty() && height[current] > height[st.top()])
            {
                int top = st.top();
                st.pop();
                if (st.empty())
                    break;
                int distance = current - st.top() - 1;
                int bounded_height = min(height[current], height[st.top()]) - height[top];
                ans += distance * bounded_height;
            }
            st.push(current++);
        }
        return ans;
    }
};

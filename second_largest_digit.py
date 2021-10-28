# Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

# An alphanumeric string is a string consisting of lowercase English letters and digits.

 

# Example 1:

# Input: s = "dfa12321afd"
# Output: 2
# Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.
# Example 2:

# Input: s = "abc1111"
# Output: -1
# Explanation: The digits that appear in s are [1]. There is no second largest digit. 

class Solution:
    def secondHighest(self, s: str) -> int:
        l=[]
        unq='0123456789'
        for i in s:
            if unq.__contains__(i) and int(i) not in l:
                l.append(int(i))
        l.sort()
        if len(l)>=2:
            return l[-2]
        return -1
        
            
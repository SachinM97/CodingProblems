# Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

# Example 1:

# Input: num = 38
# Output: 2
# Explanation: The process is
# 38 --> 3 + 8 --> 11
# 11 --> 1 + 1 --> 2 
# Since 2 has only one digit, return it.
# Example 2:

# Input: num = 0
# Output: 0

class Solution:
    def addDigits(self, num: int) -> int:
        if num<=9: 
            res=num 
        else: 
            res=0
        while num>9:
            x = num
            res = 0
            while x!=0:
                res+=x%10
                x=int(x/10)
            num=res
        return res
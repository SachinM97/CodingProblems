# Given a string s, reverse the string according to the following rules:

# All the characters that are not English letters remain in the same position.
# All the English letters (lowercase or uppercase) should be reversed.
# Return s after reversing it.

 

# Example 1:

# Input: s = "ab-cd"
# Output: "dc-ba"
# Example 2:

# Input: s = "a-bC-dEf-ghIj"
# Output: "j-Ih-gfE-dCba"
# Example 3:

# Input: s = "Test1ng-Leet=code-Q!"
# Output: "Qedo1ct-eeLg=ntse-T!"

class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        # input_str = "a-bC-dEf-ghIj"
        def_set = set('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ')
        stack = []
        l = []
        for i in range(len(s)):
            if def_set.__contains__(s[i]):
                stack.append(s[i])
            else:
                l.append(i)
        # print(s)
        # print(stack)
        # print(l)
        # for i in l:
        #     print(s[i])

        x = len(stack)-1
        c=0
        c1=0
        res = ''
        while x>=0:
            while c in l:
                res += s[c]
                c+=1
                c1+=1
            res += stack[x]
            c+=1
            x-=1
        # print(c1)
        if c1!=len(l):
            for i in range(c1, len(l)):
                # print(i)
                res+=s[l[i]]

        return res
        
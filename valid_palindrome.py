# // Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 

# // Example 1:

# // Input: s = "A man, a plan, a canal: Panama"
# // Output: true
# // Explanation: "amanaplanacanalpanama" is a palindrome.
# // Example 2:

# // Input: s = "race a car"
# // Output: false
# // Explanation: "raceacar" is not a palindrome.

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        a=set('abcdefghijklmnopqrstuvwxyz0123456789')
        s=''.join(filter(a.__contains__, s))
        res=''.join(reversed(s))
        if res==s:
            return True
        return False
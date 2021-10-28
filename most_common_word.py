# Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

# The words in paragraph are case-insensitive and the answer should be returned in lowercase.

 

# Example 1:

# Input: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]
# Output: "ball"
# Explanation: 
# "hit" occurs 3 times, but it is a banned word.
# "ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
# Note that words in the paragraph are not case sensitive,
# that punctuation is ignored (even if adjacent to words, such as "ball,"), 
# and that "hit" isn't the answer even though it occurs more because it is banned.
# Example 2:

# Input: paragraph = "a.", banned = []
# Output: "a"

class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        paragraph = paragraph.replace('.',' ').replace(',',' ').replace('!','').replace('-',' ').replace(':',' ').replace('?',' ').replace(';',' ').replace("'",' ').replace('"',' ').replace(':',' ').lower()        
        l = paragraph.split()
        dic = {}
        for i in l:
            if i in dic.keys():
                dic[i]+=1
            else:
                dic[i]=1
        res=''
        max_val=0
        for i in dic:
            if dic[i]>max_val and i not in banned:
                res=''
                res+=i
                max_val=dic[i]
                
        return res
                
        
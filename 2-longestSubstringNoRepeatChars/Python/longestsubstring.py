# -*- coding: utf-8 -*-
"""
Created on Fri Jul  8 18:31:19 2022

@author: Arijit Ganguly
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest_substring = 0
        start = 0
        string_dict = {}
        for i in range(len(s)):
            if s[i] in string_dict.keys():
                start = max(start, string_dict[s[i]] + 1)
            string_dict[s[i]] = i
            longest_substring = max(i- start + 1, longest_substring)
        return longest_substring
    

sol = Solution()
result = sol.lengthOfLongestSubstring("aab")
print(result)
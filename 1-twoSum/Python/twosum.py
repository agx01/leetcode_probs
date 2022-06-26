# -*- coding: utf-8 -*-
"""
Created on Sat Jun 25 19:08:00 2022

@author: Arijit Ganguly
"""

class Solution:
    def twoSum(self, nums, target):
        h = {} 
        for i, num in enumerate(nums):
            if (target - num) not in h.keys():
                h[num] = i
            else:
                return[h[target-num], i]
        
nums = [2,7,11,15]
target = 9
sol = Solution()
print(sol.twoSum(nums, target))
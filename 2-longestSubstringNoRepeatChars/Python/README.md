# Two Sum Problem
Given a string s, find the length of the longest substring without repeating characters.

## Strategy
1. We create variable for max length found, start index and a dictionary to hold the characters as keys and index as values to store characters
2. Loop through the index 0 to length of the string
3. For each index check if the character on the index exist in the dictionary.
4. If true, then store the value that is greater between start and index value stored in the dictionary plus 1
5. Store the character in the dictionary as key with index as the value
6. Store the maximum between max length and the difference between start and ith value
7. Upon exiting the loop return the max length

## Performance
### Runtime:
**75 ms**, faster than **80.30%** of Python3 online submissions for Longest Substring Without Repeating Characters. 

### Memory Usage:
**14 MB**, less than **49.47%** of Python3 online submissions for  Longest Substring Without Repeating Characters.

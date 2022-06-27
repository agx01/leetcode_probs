# Two Sum Problem
Given an array of integers 'nums' and an integer 'target', return the indices of the
two numbers such that they add up to 'target'.

## Assumptions:
1. Each input has exactly 1 solution.
2. No using the same element twice.

## Strategy
1. We create a map which will hold the indices of the values we traverse through with the values as keys
2. Loop through all the elements of the vector nums
3. Check if the difference between 'target' and element exist in the dictionary keys
4. If not, then store the index with the value as keys
5. If yes, we have found our 2 indices, return index stored in (target-element) and current index in the vector

## Performance
### Runtime:
**11 ms**, faster than **90.42%** of C++ online submissions for Two Sum. 

### Memory Usage:
**11.3 MB**, less than **18.04%** of C++ online submissions for Two Sum.

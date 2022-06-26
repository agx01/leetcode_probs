# Two Sum Problem
Given an array of integers 'nums' and an integer 'target', return the indices of the
two numbers such that they add up to 'target'.

## Assumptions:
1. Each input has exactly 1 solution.
2. No using the same element twice.

## Strategy
1. We create a Hashtable which will hold the indices of the values we traverse through with the values as keys
2. Loop through all the elements of the list
3. Check if the difference between 'target' and element exist in the Hashtable keys
4. If not, then store the index with the value as keys
5. If yes, we have found our 2 indices, store in results array index stored in (target-element) and current index in a list and break the loop.
6. Return the results array

## Performance
### Runtime:
**4 ms**, faster than **73.34%** of Java online submissions for Two Sum.

### Memory Usage:
**45.7 MB**, less than **37.36%** of Java online submissions for Two Sum.

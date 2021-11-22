# 1. Find the missing number in the array
# You are given an array of positive numbers from 1 to n, such that all numbers from 1 to n are present except one number x. You have to find x. The input array is not sorted. Look at the below array and give it a try before checking the solution.

# 3
# 7
# 1
# 2
# 8
# 4
# 5
# n = 8 missing number = 6

def find_missing(input):
    x = 1
    y = 1
    for i in range(1, len(input)+2):
        x = x^i
    for i in input:
        y = y^i
    return x^y




# Runtime Complexity: Linear, O(n)O(n)

# Memory Complexity: Constant, O(1)O(1)

# A naive solution is to simply search for every integer between 1 and n in the input array, stopping the search as soon as there is a missing number. But we can do better. Here is a linear, O(n)O(n), solution that uses the arithmetic series sum formula.​​ Here are the steps to find the missing number:

# Find the sum sum_of_elements of all the numbers in the array. This would require a linear scan, O(n)O(n).
# Then find the sum expected_sum of first n numbers using the arithmetic series sum formula
# The difference between these i.e. expected_sum - sum_of_elements, is the missing number in the array.



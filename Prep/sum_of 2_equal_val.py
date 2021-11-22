# Given an array of integers and a value, determine if there are any two integers in the array whose sum is equal to the given value. Return true if the sum exists and return false if it does not. Consider this array and the target sums:

# 5
# 7
# 1
# 2
# 8
# 4
# 3
# Target Sum
# 10
# 7+3=10, 2+8=10
# Target Sum
# 19
# No 2 values sum up to 19


def find_sum_of_two(A, val):
    for i in A:
        diff = val - i
        if (diff in A) and A.index(i) != A.index(diff):
            return True
    return False;



# Runtime Complexity: Linear, O(n)O(n)

# Memory Complexity: Linear, O(n)O(n)

# You can use the following algorithm to find a pair that add up to the target (say val).

# Scan the whole array once and store visited elements in a hash set.
# During scan, for every element e in the array, we check if val - e is present in the hash set i.e. val - e is already visited.
# If val - e is found in the hash set, it means there is a pair (e, val - e) in array whose sum is equal to the given val.
# If we have exhausted all elements in the array and didn’t find any such pair, the function will return false

You are given an array arr[] of positive integers. Your task is to find the maximum value that can be obtained by performing a bitwise AND operation on any two different elements in the array.

Note: AND refers to the bitwise '&' operator.

Examples:

Input: arr[] = [4, 8, 12, 16]

Output: 8

Explanation: The pair {8, 12} has the maximum AND value of 8.


Input: arr[] = [4, 8, 16, 2]

Output: 0

Explanation: No pair gives a non-zero AND value, so the output is 0.

Expected Time Complexity: O(n)

Expected Auxiliary Space: O(1)

Constraints:

1 ≤ arr.size() ≤ 5*10^5

1 ≤ arr[i] ≤ 5*10^5

Given two different arrays arr1[] and arr2[], the task is to merge the two unsorted arrays and return a sorted array.

Examples:

Input: arr1[] = [10, 5, 15] , arr2[] = [20, 3, 2]

Output: [2, 3, 5, 10, 15, 20]

Explanation: After merging both the array's and sorting it with get the desired output.  

Input: arr1[] = [1, 10, 5, 15] , arr2[] = [20, 0, 2]

Output: [0, 1, 2, 5, 10, 15, 20]

Expected Time Complexity: O (nlogn + mlogm + (n + m))

Expected Auxiliary Space: O(n+m).

Constraints:

1 ≤ arr1.size(), arr2.size()≤ 10^5

-10^5 ≤ arr1[i], arr2[i]≤ 10^5

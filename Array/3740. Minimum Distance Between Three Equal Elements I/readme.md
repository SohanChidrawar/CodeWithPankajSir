A tuple (i, j, k) of 3 distinct indices is good if nums[i] == nums[j] == nums[k].

The distance of a good tuple is abs(i - j) + abs(j - k) + abs(k - i), where abs(x) denotes the absolute value of x.

Return an integer denoting the minimum possible distance of a good tuple. If no good tuples exist, return -1.

![alt_text](min.jpg)

![alt_text](min1.jpg)

Constraints:

1 <= n == nums.length <= 100

1 <= nums[i] <= n

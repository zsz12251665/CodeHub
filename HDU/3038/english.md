# HDU 3038

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-3038)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3038)

## Solution

This problem is solved in a clever way to use the disjoint set. Rather than each element, we maintain the relationship of the prefix sum so that the sum from the $A_i$-th one to the $B_i$-th one can be translated to the difference of the prefix sum to the $(A_i-1)$-th and the prefix sum to the $B_i$-th. Now you can use the weighed disjoint set to maintain the prefix sums.

## Code

- [Solution](HDU.3038.0.cpp)

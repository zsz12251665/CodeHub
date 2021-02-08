# HDU 1213

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-1213)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1213)

## Solution

This problem required a disjoint set.

The disjoint set is a data structure which can merge two disjoint sets and determine if two elements are in the same set. Each element has a pointer, which is its "father". So you can find the root of the set in $\operatorname{O}(\log{n})$. At the same time, because it is a set, so we can put the pointer to the root after finding the root. It can reduce the time when you find the root of this element again. The time complexity of the merging is $\operatorname{O}(1)$. You just need to set the pointer of the root of the first set to the root of the second set.

After merging, we just need to scan all the elements and count the number of the roots to solve the problem.

## Code

- [Solution](HDU.1213.0.cpp)

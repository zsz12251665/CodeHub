# CF 1323C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1323C)
- [Luogu](https://www.luogu.com.cn/problem/CF1323C)
- [Codeforces](https://codeforces.com/problemset/problem/1323/C)

## Solution

To make it possible to correct, we should check whether there are equal numbers of left brackets and right brackets. Then we find the incorrect substrings and correct them. The start position should be the first place that more right brackets are found in the prefix. The end position should be the first place that the number of left brackets is not less than the number of right brackets.

## Code

- [Solution](CF.1323C.0.cpp)

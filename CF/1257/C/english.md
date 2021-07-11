# CF 1257C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1257C)
- [Luogu](https://www.luogu.com.cn/problem/CF1257C)
- [Codeforces](https://codeforces.com/problemset/problem/1257/C)

## Solution

After reading the description, we find that the shortest subarray should have only two same elements and the others are unique. Otherwise we can find a subarray of it which has only two same elements. So we simply scan the array and find the closest pair.

## Code

- [Solution](CF.1257C.0.cpp)

# CF 1323B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1323B)
- [Luogu](https://www.luogu.com.cn/problem/CF1323B)
- [Codeforces](https://codeforces.com/problemset/problem/1323/B)

## Solution

The 0s divide the rectangles into several subrectangles only containing 1. So we should enumerate the height and width of the subrectangles of size $k$ and access the subrectangles created by consecutive 1s in $a$ and $b$ one by one and calculate the answer.

## Code

- [Solution](CF.1323B.0.cpp)

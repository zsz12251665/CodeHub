# CF 1301B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1301B)
- [Luogu](https://www.luogu.com.cn/problem/CF1301B)
- [Codeforces](https://codeforces.com/problemset/problem/1301/B)

## Solution

To minimize the maximum difference, we should find the maximum element and the minimum element next to the missing elements and set $k$ as the medium of them so that we can control their differences smaller than the half range of the elements between them. However, the maximum difference might be found between two fixed elements. So you should scan the whole sequence after replacing missing elements with $k$ to find the maximum difference as the answer.

## Code

- [Solution](CF.1301B.0.cpp)

# CF 1323A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1323A)
- [Luogu](https://www.luogu.com.cn/problem/CF1323A)
- [Codeforces](https://codeforces.com/problemset/problem/1323/A)

## Solution

There might be 3 possibilities of the answer. If there is an even number, a subset including only this number has an even sum of its elements. If there are only a single odd numbers provided, of course you cannot get any non-empty subset of its elements such that their sum is even. If there are more than one odd numbers, the sum of the first and the second element must be an even number because both of them are odd numbers. So the answer is the subset of the first and second element.

## Code

- [Solution](CF.1323A.0.cpp)

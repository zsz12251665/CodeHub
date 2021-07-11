# CF 1296A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1296A)
- [Luogu](https://www.luogu.com.cn/problem/CF1296A)
- [Codeforces](https://codeforces.com/problemset/problem/1296/A)

## Solution

Firstly we count the number of odd numbers. If the number of odd numbers is odd, the answer will be "YES" from the very beginning. If it is even, we need to transform an odd number to even number or transform an even number to an odd number. This requires both even number and odd number exist. Because a number must be an even number or and odd number, so the condition will be that the number of odd numbers is positive and less than $n$.

## Code

- [Solution](CF.1296A.0.cpp)

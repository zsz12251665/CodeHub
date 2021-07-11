# CF 1300A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1300A)
- [Luogu](https://www.luogu.com.cn/problem/CF1300A)
- [Codeforces](https://codeforces.com/problemset/problem/1300/A)

## Solution

To make the product is not 0, we only need to make sure that there is no 0 in the sequence. And if we find the sum is 0, all we need to do is to add 1 to a non-negative-one element to keep the product not being 0 and make the sum become 1. However, we don't need to which element is not -1. And there must be an element which is not -1 when the sum is 0, otherwise the sum will not be 0.

## Code

- [Solution](CF.1300A.0.cpp)

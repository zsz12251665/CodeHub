# CF 1253D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1253D)
- [Luogu](https://www.luogu.com.cn/problem/CF1253D)
- [Codeforces](https://codeforces.com/problemset/problem/1253/D)

## Solution

This problem is asking to check if all the connected blocks have continued points and count how many edges required to make it have. So we need a union find set to maintain the maximum index of the points in a connected block. And then scan the points in order to check if the continued points are in the same block until we reached the maximum point of the block. If not, just add an edge to make it do and update the maximum point we are stopping at.

## Code

- [Solution](CF.1253D.0.cpp)

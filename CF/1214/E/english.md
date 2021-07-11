# CF 1214E

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1214E)
- [Luogu](https://www.luogu.com.cn/problem/CF1214E)
- [Codeforces](https://codeforces.com/problemset/problem/1214/E)

## Solution

Though I have worked out the solution just after the contest, I didn't manage to achieve it. Firstly we form a main chain with the odd points. We should sort the points in <data value="v{d}b{v{i}}"></data> decreasing order to make sure every pair of points should have the right distances (The point with the largest <data value="v{d}b{v{i}}"></data> should be the start point and the one with the smallest <data value="v{d}b{v{i}}"></data> should be the end point). Then we insert the even points. If the even point is connected to the end point of the main chain, we should extend the length of the chain. Or we can simply print the edge but not storage this point anymore.

## Code

- [Solution](CF.1214E.0.cpp)

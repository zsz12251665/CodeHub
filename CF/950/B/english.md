# CF 950B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-950B)
- [Luogu](https://www.luogu.com.cn/problem/CF950B)
- [Codeforces](https://codeforces.com/problemset/problem/950/B)

## Solution

It seems that the problem B is as difficult as the first problem in Senior Group, <abbr title="National Olympiad in Informatics in Provinces">NOIP</abbr>. The problem is asking how many consequent parts of the two arrays that are equal there are. So we can count the prefix sum of the two array and check if there are two numbers equal. What's more, as both <data value="v{x}b{v{i}}"></data> and <data value="v{y}b{v{i}}"></data> are bigger than zero, so the prefix must be raising up. So you can just add the number to the smaller prefix sum.

## Code

- [Solution](CF.950B.0.cpp)

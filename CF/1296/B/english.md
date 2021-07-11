# CF 1296B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1296B)
- [Luogu](https://www.luogu.com.cn/problem/CF1296B)
- [Codeforces](https://codeforces.com/problemset/problem/1296/B)

## Solution

Well, we can simply use the greedy algorithm to solve this problem. As we can get 1 burle back for every 10 burles spent, we should try to spend burles in multiples of 10. So when we have $s$ burles, spend <data value="c{10}o{}o{&lfloor;}f{v{s}l{}c{10}}o{&rfloor;}"></data> of them until you have less than 10 burles left.

## Code

- [Solution](CF.1296B.0.cpp)

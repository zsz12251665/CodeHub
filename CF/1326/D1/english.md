# CF 1326D1

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1326D1)
- [Luogu](https://www.luogu.com.cn/problem/CF1326D1)
- [Codeforces](https://codeforces.com/problemset/problem/1326/D1)

## Solution

Since <data value="o{|}v{s}o{|}o{&le;}c{5000}"></data> in this problem, of course we can use the <data value="o{O}o{(}o{|}v{s}o{|}o{)}"></data> algorithm in <[CF 1326D2](/CF/1326/D2/english.md). However, we will introduce an ~~violent~~ easy version here.

For the longest prefix which is symmetric to the suffix of the same length, of course they should be part of the $a$ and $b$. So the task is to find the longest palindrome which is a prefix or suffix of the remained part. By violently enumerating the length, we can find the answer in <data value="o{O}o{(}o{|}v{s}o{|}p{c{2}}o{)}"></data>.

## Code

- [Solution](CF.1326D1.0.cpp)

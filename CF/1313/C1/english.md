# CF 1313C1

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1313C1)
- [Luogu](https://www.luogu.com.cn/problem/CF1313C1)
- [Codeforces](https://codeforces.com/problemset/problem/1313/C1)

## Solution

Since <data value="v{n}o{&le;}c{1000}"></data> in this problem, of course we can use the <data value="o{O}o{(}v{n}o{)}"></data> algorithm in [CF 1313C2](/CF/1313/C2/english.md). However, we will introduce an ~~violent~~ easy version here.

We notice that the answer should have only one peak according to the requirement of the answer. So we can enumerate the peaks and make both sides monotonic, calculate the total numbers of floors and take the largest one. Because the calculation is <data value="o{O}o{(}v{n}o{)}"></data> for each peak, the total time complexity will be <data value="o{O}o{(}v{n}p{c{2}}o{)}"></data>.

## Code

- [Solution](CF.1313C1.0.cpp)

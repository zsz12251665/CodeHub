# CF 950A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-950A)
- [Luogu](https://www.luogu.com.cn/problem/CF950A)
- [Codeforces](https://codeforces.com/problemset/problem/950/A)

## Solution

The problem is very simple. As you have seen <data value="c{0}o{&le;}v{l}o{,}v{r}o{,}v{a}o{&le;}c{100}"></data>, you can even use a <abbr title="Brute Force">BF</abbr> to solve the problem just like Solution 1. You decide which hand each ambidexter should use to maximize the number of the players.

However, you can also solve the problem in <data value="o{O}o{(}c{1}o{)}"></data> as Solution 2 does. Suppose that there are more right-handers than left-handers (actually there are). If there are more right-handers than the other two, we could only have twice number of left-handers and ambidexters. Otherwise we could split the rest of ambidexters into two halves to enlarge the two groups.

## Code

- [Solution 1](CF.950A.0.cpp)
- [Solution 2](CF.950A.1.cpp)

# CF 1301D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1301D)
- [Luogu](https://www.luogu.com.cn/problem/CF1301D)
- [Codeforces](https://codeforces.com/problemset/problem/1301/D)

## Solution

As all nodes have their incoming degrees equals to their outgoing degrees, there must be an Euler circuit. So if and only if <data value="v{k}o{&gt;}c{4}o{}v{n}o{}v{m}o{-}c{2}o{}v{n}o{-}c{2}o{}v{m}"></data> will the answer be "NO".

Thanks to the special judge, you can use almost any pattern you like. Just attention that the $a$ in your answer should not exceed $3000$.

## Code

- [Solution](CF.1301D.0.cpp)

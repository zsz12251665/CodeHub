# CF 617B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-617B)
- [Luogu](https://www.luogu.com.cn/problem/CF617B)
- [Codeforces](https://codeforces.com/problemset/problem/617/B)

## Solution

Suppose there are $k$ nuts in the chocolate, and between the $i$-th nut and the <data value="o{(}v{i}o{+}c{1}o{)}"></data>-th nut there are <data value="v{b}b{v{i}}"></data> empty bars. Then the answer will be <data value="o{&Pi;}i{v{k}o{-}c{1}l{}v{i}o{=}c{1}}o{(}v{b}b{v{i}}o{+}c{1}o{)}"></data>. Attention that the empty bars before the first nut or behind the last nut should not be counted. And if there is no nut, the answer will be zero.

## Code

- [Solution](CF.617B.0.cpp)

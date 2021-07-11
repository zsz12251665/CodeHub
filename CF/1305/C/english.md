# CF 1305C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1305C)
- [Luogu](https://www.luogu.com.cn/problem/CF1305C)
- [Codeforces](https://codeforces.com/problemset/problem/1305/C)

## Solution

This problem is very interesting. We notice that $m$ is very small. So if there exist a pair of $i$ and $j$ that <data value="}v{a}b{v{i}}o{&equiv;}}v{a}b{v{j}}o{(}o{mod}v{m}o{)}o{&hArr;}o{|}v{a}b{v{i}}o{-}v{a}b{v{j}}o{|}o{&equiv;}c{0}o{(}o{mod}v{m}o{)}"></data>, then the answer will be zero too. So we can check whether all the numbers have different remainders. If not, the answer is zero. Otherwise, there are at most $m$ left. And we can use an <data value="o{O}o{(}v{m}p{c{2}}o{)}"></data> <abbr title="Brute Force">BF</abbr> to calculate the answer.

## Code

- [Solution](CF.1305C.0.cpp)

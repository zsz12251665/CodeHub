# CF 1257E

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1257E)
- [Luogu](https://www.luogu.com.cn/problem/CF1257E)
- [Codeforces](https://codeforces.com/problemset/problem/1257/E)

## Solution

The solution is amazing! If you sort everyone's problems and put them together, the ones which are not in the longest increasing sequence will be the ones which needs to be redistributed.

It might be unbelievable, but it is reasonable. The problem is just asking you to sort the sequence in increasing order. So the minimum number of the steps is the length of the whole sequence minus the length of the longest increasing sequence, isn't it?

P. S. You need to find the longest increasing sequence in <data value="o{O}o{(}v{n}o{}o{lg}v{n}o{)}"></data>. <data value="o{O}o{(}v{n}p{c{2}}o{)}"></data> is unacceptable since <data value="v{k}b{c{1}}o{+}v{k}b{c{2}}o{+}v{k}b{c{3}}o{&le;}c{200000}"></data>.

## Code

- [Solution](CF.1257E.0.cpp)

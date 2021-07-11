# CF 1326B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1326B)
- [Luogu](https://www.luogu.com.cn/problem/CF1326B)
- [Codeforces](https://codeforces.com/problemset/problem/1326/B)

## Solution

As <data value="v{x}b{c{1}}o{=}c{0}"></data>, we have <data value="v{a}b{c{1}}o{=}v{b}b{c{1}}o{+}v{x}b{c{1}}o{=}v{b}b{c{1}}"></data>. So we can get <data value="v{x}b{c{2}}o{=}o{max}o{(}c{0}o{,}v{a}b{c{1}}o{)}"></data> and repeat the steps to calculate all <data value="v{a}b{v{i}}"></data>.

## Code

- [Solution](CF.1326B.0.cpp)

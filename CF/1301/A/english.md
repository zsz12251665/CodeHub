# CF 1301A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1301A)
- [Luogu](https://www.luogu.com.cn/problem/CF1301A)
- [Codeforces](https://codeforces.com/problemset/problem/1301/A)

## Solution

Before you swap <data value="v{c}b{v{i}}"></data> and <data value="v{a}b{v{i}}"></data>, <data value="v{c}b{v{i}}"></data> should be the same as <data value="v{b}b{v{i}}"></data>. If you swap <data value="v{c}b{v{i}}"></data> and <data value="v{b}b{v{i}}"></data>, it should be the same as <data value="v{a}b{v{i}}"></data>. Otherwise, you cannot make $a$ the same as $b$ becuase you must swap <data value="v{c}b{v{i}}"></data> with <data value="v{a}b{v{i}}"></data> or <data value="v{b}b{v{i}}"></data>.

## Code

- [Solution](CF.1301A.0.cpp)

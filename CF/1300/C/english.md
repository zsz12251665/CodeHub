# CF 1300C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1300C)
- [Luogu](https://www.luogu.com.cn/problem/CF1300C)
- [Codeforces](https://codeforces.com/problemset/problem/1300/C)

## Solution

According to the value table, <data value="o{f}o{(}v{x}o{,}v{y}o{)}o{=}o{(}v{x}o{&or;}v{y}o{)}o{-}v{y}o{=}v{x}o{&and;}o{&not;}v{y}"></data>, so <data value="o{f}o{(}o{f}o{(}v{x}o{,}v{y}o{)}o{,}v{z}o{)}o{=}v{x}o{&and;}o{&not;}v{y}o{&and;}o{&not;}v{z}o{=}v{x}o{&and;}o{&not;}o{(}v{y}o{&or;}v{z}o{)}o{=}o{f}o{(}v{x}o{,}v{y}o{&or;}v{z}o{)}"></data>. So the value of an array <data value="o{[}v{b}b{c{1}}o{,}v{b}b{c{2}}o{,}v{b}b{c{3}}o{,}o{...}o{,}v{b}b{v{n}}o{]}"></data> should be <data value="o{f}o{(}v{b}b{c{1}}o{,}v{b}b{c{2}}o{&or;}v{b}b{c{3}}o{&or;}o{...}o{&or;}v{b}b{v{n}}o{)}"></data>, which is only related to the first element of the array. So we can calculate all the values started from <data value="v{a}b{v{i}}"></data>, and choose the largest one to output.

However, as <data value="c{1}o{&le;}v{n}o{&le;}c{10}p{c{5}}"></data>, the <data value="o{O}o{(}v{n}p{2}o{)}"></data> time complexity is not acceptable. So we need to preprocess the values of all elements except <data value="v{a}b{v{i}}"></data> merging together with the operator <data value="o{&or;}"></data>. This can be done by merging the prefix and the suffix.

## Code

- [Solution](CF.1300C.0.cpp)

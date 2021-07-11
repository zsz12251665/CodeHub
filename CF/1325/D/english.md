# CF 1325D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1325D)
- [Luogu](https://www.luogu.com.cn/problem/CF1325D)
- [Codeforces](https://codeforces.com/problemset/problem/1325/D)

## Solution

In a word, <data value="v{a}o{+}v{b}o{=}v{a}o{&oplus;}v{b}o{+}c{2}o{}o{(}v{a}o{&and;}v{b}o{)}"></data>, which <data value="o{&oplus;}"></data> is bitwise-xor and <data value="o{&and;}"></data> is bitwise-and. So the answer will be <data value="o{\{}v{u}o{,}f{v{v}o{-}v{u}l{}c{2}}o{,}f{v{v}o{-}v{u}l{}c{2}}o{\}}"></data> if <data value="o{(}v{v}o{-}v{u}o{)}"></data> is a positive and even, otherwise the answer will be -1. And if <data value="v{u}o{&and;}f{v{v}o{-}v{u}l{}c{2}}o{=}c{0}"></data> we can even add them together in advance because in this case <data value="v{u}o{&oplus;}f{v{v}o{-}v{u}l{}c{2}}o{=}v{u}o{+}f{v{v}o{-}v{u}l{}c{2}}"></data>.

But why <data value="v{a}o{+}v{b}o{=}v{a}o{&oplus;}v{b}o{+}c{2}o{}o{(}v{a}o{&and;}v{b}o{)}"></data>? As we know, <data value="o{&oplus;}"></data> functions as same as the addition without the carry. The carry can be expressed as <data value="c{2}o{}o{(}v{a}o{&and;}v{b}o{)}"></data> because <data value="v{a}o{&and;}v{b}"></data> marks the bits which is 1 in both $u$ and $v$, which will lead to a carry in binary.

P. S. Please notice that there are two special cases. If <data value="v{u}o{=}v{v}o{=}c{0}"></data>, the answer is 0 as the example shows. And if <data value="v{u}o{=}v{v}o{&ne;}c{0}"></data>, there will be only 1 number in the answer, which is $u$.

## Code

- [Solution](CF.1325D.0.cpp)

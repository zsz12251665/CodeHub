# CF 1301C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1301C)
- [Luogu](https://www.luogu.com.cn/problem/CF1301C)
- [Codeforces](https://codeforces.com/problemset/problem/1301/C)

## Solution

When you see <data value="v{t}o{&le;}c{10}p{c{5}}"></data> and <data value="v{m}o{&le;}v{n}o{&le;}c{10}p{c{9}}"></data>, you might realize that the problem is a mathematical problem which can be solve in <data value="o{O}o{(}c{1}o{)}"></data>. According to the the principle of inclusion-exclusion, the number of substrings containing as least an '1' equals to the total number of substrings minus the number of substrings filled with '0'. Of course the total number of substrings is <data value="f{v{n}o{}o{(}v{n}o{+}c{1}o{)}l{}c{2}}"></data>. And for $a$ consecutive '0's, there are <data value="f{v{a}o{}o{(}v{a}o{+}c{1}o{)}l{}c{2}}"></data> substrings which are filled with '0'. To minimize the total number of substrings filled with '0', we should try to divide the all <data value="o{(}v{n}o{-}v{m}o{)}"></data> '0' into <data value="o{(}v{m}o{+}c{1}o{)}"></data> parts equally. So there should be <data value="o{(}v{n}o{-}v{m}o{)}o{mod}o{(}v{m}o{+}c{1}o{)}"></data> groups of <data value="o{(}o{&lfloor;}f{v{n}o{-}v{m}l{}v{m}o{+}c{1}}o{&rfloor;}o{+}c{1}o{)}"></data> consecutive '0's. The other groups should have <data value="o{&lfloor;}f{v{n}o{-}v{m}l{}v{m}o{+}c{1}}o{&rfloor;}"></data> consecutive '0's.

## Code

- [Solution](CF.1301C.0.cpp)

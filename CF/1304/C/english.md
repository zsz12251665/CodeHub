# CF 1304C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1304C)
- [Luogu](https://www.luogu.com.cn/problem/CF1304C)
- [Codeforces](https://codeforces.com/problemset/problem/1304/C)

## Solution

This problem needs a little trick. Suppose we have known the available temperature range <data value="o{[}v{lp}o{,}v{rp}o{]}"></data> at a certain moment. After $t$ minutes, the possible temperature range will be <data value="o{[}v{lp}o{-}v{t}o{,}v{rp}o{+}v{t}o{]}"></data>. If the intersection between it and the customer's requirement is not empty, the customer can be satisfied and the available temperature range when this customer arrives will be the intersection. In addition, we know the original temperature, which can be expressed as the range <data value="o{[}v{m}o{,}v{m}o{]}"></data>. So we can check whether the intersection is an empty set when each customer arrives.

By the way, I am sure that you've known that the intersection of two range <data value="o{[}v{a}o{,}v{b}o{]}"></data> and <data value="o{[}v{c}o{,}v{d}o{]}"></data> is <data value="o{[}o{max}o{(}v{a}o{,}v{c}o{)}o{,}o{min}o{(}v{b}o{,}v{d}o{)}o{]}"></data> (the set is empty when <data value="o{max}o{(}v{a}o{,}v{c}o{)}o{&gt;}o{min}o{(}v{b}o{,}v{d}o{)}"></data>), haven't you?

## Code

- [Solution](CF.1304C.0.cpp)

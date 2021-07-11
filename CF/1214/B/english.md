# CF 1214B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1214B)
- [Luogu](https://www.luogu.com.cn/problem/CF1214B)
- [Codeforces](https://codeforces.com/problemset/problem/1214/B)

## Solution

If you have seen the code, you might be surprised that why it can be so short. Firstly, to pick $n$ participants from all the <data value="o{(}v{b}o{+}v{g}o{)}"></data> ones means the same as to pick <data value="o{(}v{b}o{+}v{g}o{-}v{n}o{)}"></data> participants from all the <data value="o{(}v{b}o{+}v{g}o{)}"></data> ones. So if <data value="o{(}v{b}o{+}v{g}o{-}v{n}o{)}"></data> is smaller, we could take it as $n$ instead. And we notice that if we only have $b$ boys, there will be at most <data value="o{(}v{b}o{+}c{1}o{)}"></data> kinds of the possible number of the blue budges. And so do girls and their red budges. That means the answer will be the minimum number among <data value="o{(}v{b}o{+}c{1}o{)}"></data>, <data value="o{(}v{g}o{+}c{1}o{)}"></data> and <data value="o{(}v{n}o{+}c{1}o{)}"></data>. So that makes our code short but correct.

## Code

- [Solution](CF.1214B.0.cpp)

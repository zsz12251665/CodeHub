# CF 1300B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1300B)
- [Luogu](https://www.luogu.com.cn/problem/CF1300B)
- [Codeforces](https://codeforces.com/problemset/problem/1300/B)

## Solution

The answer of the problem is pretty simple. It is <data value="o{(}v{a}b{v{n}o{+}c{1}}o{-}v{a}b{v{n}}o{)}"></data> after the array is sorted (In the following we suppose the array is already sorted). However, the proof might be a little complicated.

According to the definition of the median, we know that there should be exactly <data value="o{(}v{n}o{-}c{1}o{)}"></data> elements less than the medians of the sets and <data value="o{(}v{n}o{-}c{1}o{)}"></data> elements greater than the medians in total. So the medians must be <data value="v{a}b{v{n}o{+}c{1}o{-}v{i}}"></data> and <data value="v{a}b{v{n}o{+}v{i}}"></data> which <data value="c{1}o{&le;}v{i}o{&le;}v{n}"></data>, otherwise you cannot find a way to divide the array which meet the requirement above according to the pigeonhole principle. And as the array is sorted, the minimum difference can be found when <data value="v{i}o{=}c{1}"></data>.

## Code

- [Solution](CF.1300B.0.cpp)

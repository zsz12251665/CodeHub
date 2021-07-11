# CF 1300D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1300D)
- [Luogu](https://www.luogu.com.cn/problem/CF1300D)
- [Codeforces](https://codeforces.com/problemset/problem/1300/D)

## Solution

Well, according to the problem, the polygon <data value="v{T}"></data> should be central symmetry. For a polygon <data value="v{P}o{(}v{x}o{,}v{y}o{)}"></data> which includes <data value="o{(}v{x}b{c{0}}o{,}v{y}b{c{0}}o{)}"></data> and <data value="o{(}c{0}o{,}c{0}o{)}"></data>, the polygon <data value="v{P}o{(}v{x}o{-}v{x}b{c{0}}o{,}v{y}o{-}v{y}b{c{0}}o{)}"></data> should include <data value="o{(}c{0}o{,}c{0}o{)}"></data> and <data value="o{(}o{-}v{x}b{c{0}}o{,}o{-}v{y}b{c{0}}o{)}"></data>. According to the definition, both of them in <data value="v{T}"></data>, so <data value="v{T}"></data> includes both <data value="o{(}v{x}b{c{0}}o{,}v{y}b{c{0}}o{)}"></data> and <data value="o{(}o{-}v{x}b{c{0}}o{,}o{-}v{y}b{c{0}}o{)}"></data>, which means it is central symmetry. Since <data value="v{P}"></data> and <data value="v{T}"></data> are similar, <data value="v{P}"></data> is central symmetry too. So our task is to verified whether <data value="v{P}"></data> is central symmetry. In other words, we need to check if the vectors of the subtenses are not opposite to each other.

## Code

- [Solution](CF.1300D.0.cpp)

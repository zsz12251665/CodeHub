# NOIP 2015S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2678)
- [Vijos](https://www.vijos.org/p/1981)

## Solution

I spent a large amount of time thinking how to solve the problem with greedy algorithm or <abbr title="dynamic programming">dp</abbr> algorithm until I knew that the correct solution is halving searching algorithm since the answer is monotonic. Greedy algorithm requires an <data value="o{O}o{(}v{n}p{2}o{)}"></data> time complexity and dp algorithm is completely wrong.

The halving searching algorithm is acceptable because it provides an <data value="o{O}o{(}v{n}o{}o{lg}v{l}o{)}"></data> time complexity. First of all, we set the range as <data value="o{[}c{0}o{,}v{l}o{]}"></data>. Then we try if making the minimum distance between two rocks as the middle value of the range is acceptable. Then we can reduce the searching range as half of the last range. Continue to take these steps until the range is empty. So we will only try <data value="o{lg}v{l}"></data> times. For each try, we can finish it by scanning the rocks once, which is <data value="o{O}o{(}v{n}o{)}"></data>. So we solve the problem.

## Code

- [Solution](NOIP.2015S4.0.cpp)

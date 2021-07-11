# CF 954D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-954D)
- [Luogu](https://www.luogu.com.cn/problem/CF954D)
- [Codeforces](https://codeforces.com/problemset/problem/954/D)

## Solution

This problem is a good practice of <abbr title="Shortest Path Faster Algorithm">SPFA</abbr>. To solve the problem, you can run SPFA twice to find the distance to $s$ and $t$ of each point. Then you can enumerate the point pairs and check whether you can add an edge here. But remember to skip or remove the edges which already exist. The total time complexity is <data value="o{O}o{(}v{n}p{2}o{)}"></data>.

## Code

- [Solution](CF.954D.0.cpp)

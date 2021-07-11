# CF 723D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-723D)
- [Luogu](https://www.luogu.com.cn/problem/CF723D)
- [Codeforces](https://codeforces.com/problemset/problem/723/D)

## Solution

This problem required us to find out all the lakes, and according to the greedy algorithm, we will fill the smallest lakes with land until there are only $k$ of them left. But the problem is how to find out all the lakes. The answer is <abbr title="Depth-First Search">DFS</abbr>. What's more, you'll find the data range is just <data value="c{1}o{&le;}v{n}o{,}v{m}o{&le;}c{50}"></data> and <data value="c{0}o{&le;}v{k}o{&le;}c{50}"></data>. So what else do we need to worry about? The simulation is very enough.

## Code

- [Solution](CF.723D.0.cpp)

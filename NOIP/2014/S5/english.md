# NOIP 2014S5

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2296)
- [Vijos](https://www.vijos.org/p/1909)

## Solution

This problem is a shortest path problem. We can solved it with Dijkstra's algorithm, Bellman-Ford algorithm or <abbr title="Shortest Path Faster Algorithm">SPFA</abbr>. My solution uses SPFA, an improvement of the Bellman-Ford algorithm, but in the solution I won't talk much about it. We'll focus on the requirement of the path.

The problem asks us to find a path that is formed by the points that have no point not linked to the destination connected. So we can use a <abbr title="Depth-First Search">DFS</abbr> to find out all the points that is linked to the destination with the graph reversed. Then we can mark the points which are not allowed to be part of the path. Then we can run the SPFA.

## Code

- [Solution](NOIP.2014S5.0.cpp)

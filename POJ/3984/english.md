# POJ 3984

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3984)
- [POJ](http://poj.org/problem?id=3984)

## Solution

This Problem is easy to solve because of the $5\times5$ matrix. Here is a way using <abbr title="Breadth-First Search">BFS</abbr>.

We can make a parent array of every point who records its parent on the BFS tree from $(4,4)$. Then we can easily find the path from $(0,0)$ to $(4,4)$ with the tree, just asking his ancestors.

## Code

- [Solution](POJ.3984.0.cpp)

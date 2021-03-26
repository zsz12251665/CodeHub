# POJ 3984

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3984)
- [POJ](http://poj.org/problem?id=3984)

## 解法

鉴于这是个 $5\times5$ 的矩阵，这个问题很容易。以下是一个基于 <abbr title="广度优先搜索">BFS</abbr> 的做法。

我们可以设一个数组记录每一个点在从 $(4,4)$ 出发的 BFS 树上的父节点。然后我们就可以借助这棵树简单地找到 $(0,0)$ 到 $(4,4)$ 的路径——直接找祖先即可。

## 代码

- [正解](POJ.3984.0.cpp)

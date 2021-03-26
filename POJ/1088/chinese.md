# POJ 1088

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-1088)
- [POJ](http://poj.org/problem?id=1088)

## 解法

一开始，我觉得这个题用 <abbr title="广度优先搜索">BFS</abbr> 从最低点搜到最高点就能过，然后就遇到了一个类似 $\begin{matrix}8&9&1&8&8\\4&5&6&7&8\end{matrix}$ 的情况 <abbr title="答案错误">WA</abbr> 了。

显然，最大长度为 5。但这并不是从最高点到最低点。因此我必须要搜到每一个点以保证我找到的长度最长。我用了一种记忆化搜索来减少搜索时间。当我搜到一个点时，如果它已经被搜到了，搜索函数就能立刻返回答案。否则它会取附近的四个点的最大值并加 1，即 $L_{x,y}=\max(L_{x-1,y},L_{x,y-1},L_{x+1,y},L_{x,y+1})+1$。

## 代码

- [正解](POJ.1088.0.cpp)

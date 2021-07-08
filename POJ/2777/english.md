# POJ 2777

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2777)
- [POJ](http://poj.org/problem?id=2777)

## Solution

This problem requires a segment tree (i. e. interval tree). A segment tree is a data structure used to solve problems based on intervals. This problem requires us to implement two kinds of operations: setting an colour of an interval and querying number of the colours on an interval.

The first step is to build and initialize the segment tree. A node of a segment tree keeps the information of the interval $[l,r]$ and its two children keep the information of the interval $\left[l,\left\lfloor\frac{l+r}2\right\rfloor\right]$ and $\left[\left\lfloor\frac{l+r}2\right\rfloor+1,r\right]$. So we can use a <abbr title="Depth-First Search">DFS</abbr> to initialize the tree. By the way, we will also need to use the binary compression to keep the set of the thirty colours as an integer. A segment tree is a full binary tree with the number of leaf nodes as $L$, so time complexity of initialization is $\operatorname{O}(L)$.

Then we implement the operations:

- For each setting operation, when the operation come to a node, we can check if the interval of the node is in the interval of the operation. If so, just set the lazy tag and update the colour set. Otherwise we need to pass down the lazy tag (if any), send the operation to its children and then update the colour set according to their children's ones. Because we use lazy tag to prune the operation, there will be at most two nodes which requires pushing down to their children in each level of the tree. So we can complete the operation in $\operatorname{O}(\log L)$.
- For each query operation, it can also be finished in $\operatorname{O}(\log L)$. It is similar to the setting operation but we need to return the colour set. If the query interval covers the interval of the node, return the colour set of the node directly. Otherwise pass down the lazy tag (if any), send the operation to its children and union the result of them as the result of this node.

The time complexity of the whole algorithm is $\operatorname{O}(L\log L)$.

## Code

- [Solution](POJ.2777.0.cpp)

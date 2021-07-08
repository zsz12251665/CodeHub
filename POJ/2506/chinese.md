# POJ 2506

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2506)
- [POJ](http://poj.org/problem?id=2506)

## 解法
显然只有一种方法拼出 $2\times0$ 的矩形（无需任何瓦片）和 $2\times1$ 的矩形（用一个 $2\times1$ 的瓦片）。那么更长的矩形呢？一个 $2\times i(i\le2)$ 的矩形必然以一个直立的 $2\times1$ 的瓦片、一个 $2\times2$ 的瓦片或者两个平躺的 $2\times1$ 的瓦片结尾。如果是一个直立的 $2\times1$ 的瓦片，其方案数就是 $2\times(i-1)$ 的矩形的方案数。如果是一个 $2\times2$ 的瓦片或是两个平躺的 $2\times1$ 的瓦片，其方案数均为 $2\times(i-2)$ 的矩形的方案数。因此总方案数为 $2\times(i-1)$ 的矩形的方案数加上 $2\times(i-2)$ 的矩形的方案数的两倍。因为数据范围只有 $0\le n\le250$，所以我们可以预处理出每一个 $n$ 的答案。

## 代码

- [正解](POJ.2506.0.cpp)

# NOIP 2017S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P3958)
- [Vijos](https://www.vijos.org/p/2031)

## Solution

This problem can be obviously solved with <abbr title="Depth-First Search">DFS</abbr>. The only thing to pay attention is the visit tag. When you reach a node, you should set the visit tag, or you may visit it again by a loop. This may lead to an endless program. It is a good habit to set up a visit tag.

## Code

- [Solution](NOIP.2017S4.0.cpp)

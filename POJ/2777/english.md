# POJ 2777

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2777)
- [POJ](http://poj.org/problem?id=2777)

## Solution

This problem needs a segment tree to solve. A segment tree is used to solve problems based on ranges. For example, this problem requires us to provide two kinds of operation, which are setting values on a range and asking number of the colours on a range.

The first step is to build and initialize the segment tree. As we all know, the segment tree is a tree of which the nodes keeps the information of the range <data value="o{[}v{l}o{,}v{r}o{]}"></data> and its two children keep the information of the range <data value="o{[}v{l}o{,}f{v{l}o{+}o{r}l{}c{2}}o{]}"></data> and <data value="o{[}f{v{l}o{+}o{r}l{}c{2}}o{+}c{1}o{,}v{r}o{]}"></data>. So we can use a <abbr title="Depth-First Search">DFS</abbr> to format it. By the way, we will also need to use the state compression to keep the states of thirty colours in an integer. Then we can read the operations. For each setting operation, we can finish it in <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. This is because when the operation come to a node, we can check if the range of the node is in the range of the operation. If it is, set the lazy tag up and return, or pass down the lazy tag, send the operation to its children and update colour state. For each asking operation, it can also be finished in <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. It is similar to the setting operation but we just need to return the the compressed state and then count the number of colours. So the time complexity of the whole algorithm is <data value="o{O}o{(}v{n}o{}o{lg}v{n}o{)}"></data>.

## Code

- [Solution](POJ.2777.0.cpp)

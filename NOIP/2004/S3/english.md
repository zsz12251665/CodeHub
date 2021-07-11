# NOIP 2004S3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1091)
- [Vijos](https://www.vijos.org/p/1098)

## Solution

First, to every $i$ in <data value="o{[}c{1}o{,}v{n}o{]}"></data>, we need to find the longest ascending subsequence from 1 to $i$ and the longest descending subsequence from $i$ to $n$. Both of them must include $i$. In this way, we can count the number of the students who get out when $i$ is the tallest student in the team. And then, we can search the <data value="o{[}c{1}o{,}v{n}o{]}"></data> to get the smallest answer.

## Code

- [Solution](NOIP.2004S3.0.cpp)

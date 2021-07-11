# NOIP 2012J3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1077)
- [Vijos](https://www.vijos.org/p/1792)

## Solution

This problem requires <abbr title="dynamic programming">dp</abbr>. We define the array $f$ such that $f_{i,j}$ means after choosing $i$ kinds of flowers we know have $j$ pots of flowers. And the state transition formula will be $f_{i,j}=\sum_{k=0}^{\min(a_i,j)}f_{i-1,j-k}$, that $k$ means to the number of the pots of the $i$-th flowers. And the answer, of course, will be $f_{n,m}$.

## Code

- [Solution](NOIP.2012J3.0.cpp)

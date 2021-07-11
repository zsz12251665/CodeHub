# NOIP 2013S1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1965)
- [Vijos](https://www.vijos.org/p/1841)

## Solution

This problem is testing our fast power algorithm because of the $10^k$.

First, we should transform the index into binary. For example, we have $10^23=10^{(10111)_2}=10^{16}\times10^4\times10^2\times+10^1$. It is not difficult to find it we can square the base for times to get $10^1$, $10^2$, $10^4$ and $10^{16}$. That can reduce the time complexity to $\operatorname{O}(\log n)$.

## Code

- [Solution](NOIP.2013S1.0.cpp)

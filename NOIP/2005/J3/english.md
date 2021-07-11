# NOIP 2005J3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1048)
- [Vijos](https://www.vijos.org/p/1104)

## Solution

The problem is a 01 knapsack problem. We can solve it by using <abbr title="dynamic programming">dp</abbr>.

Usually, a dp algorithm is made up of a state array $f$ and the state transition formula. For a knapsack problem, the formula is $f_i=\max_{t\le j\le c_i}(dp_{j-c_i}+p_i)$. The use of it will be shown in the code below.

## Code

- [Solution](NOIP.2005J3.0.cpp)

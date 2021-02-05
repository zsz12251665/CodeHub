# BZOJ 3505

## Description

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-3505)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/3505)

## Solution

First of all, I have to remind you that a $n\times m$ grid have $n+1$ rows and $m+1$ columns which are lines. So we make $n=n+1$, $m=m+1$ in the following solution.

There are $nm$ points in the grid, which can make $\tbinom{n m}{3}$ combinations of 3 points in total. But some of the combinations have their 3 points lying on the same line, which can't form a triangle! We need to pick them up.

The combinations on the same row or the same column is easy to pick up, how about the leaning ones? As we all know, there are $\gcd(|a-c|,|b-d|)-1$ points on the segment between two different points $(a,b)$ and $(c,d)$. So we can enumerate the second point, calculate the points between it and $(0,0)$ and then pick up these combinations as well as the ones that are moved and reflected from the original ones so that all illegal combinations can be removed. For each segment between $(0,0)$ and $(i,j)$, there are $2(n-i)(m-j)$ identical structures in the whole grid ($(0,0)$ and $(i,j)$ as well as $(i,0)$ and $(0,j)$ for each rectangle of $i\times j$).

## Code

- [Solution](BZOJ.3505.0.cpp)

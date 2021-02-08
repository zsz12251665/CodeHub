# HDU 2089

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2089)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2089)

## Solution

At the very beginning, I just search the interval between $n$ and $m$ and count the number. However, it takes too much time to search the interval when it is asked. So we can use a way just like prefix sum that we'll preprocess an array with the number of the lucky numbers. After reading a pair of $(n,m)$, all we need to do is to subtract the number of the lucky numbers from $0$ to $n-1$ from the one from $0$ to $m$. Although it takes much time in preprocessing, it reduces the time of query from $\operatorname{O}(n)$ to $\operatorname{O}(1)$.

## Code

- [Solution](HDU.2089.0.cpp)

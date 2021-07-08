# POJ 2406

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2406)
- [POJ](http://poj.org/problem?id=2406)

## Solution

Let's notate a prefix of $i$ chars of the string as $p_i$. If $p_i$ is a period of the string, we must have $L\equiv0\pmod i$, which $L$ is the length of the string. So we can enumerate the length of the period $i$ and check whether the $p_i$ is a period of the string. The time complexity is $\operatorname{O}(L\operatorname{d}(L))$, which $\operatorname{d}(n)$ means the number of factors of $n$.

By the way, the time for scanning the string once will not be as large as $L$ while solving the problem. This is because when you find that a prefix is not a period, you abandon it immediately so that you don't need to scan to the end of the string.

## Code

- [Solution](POJ.2406.0.cpp)

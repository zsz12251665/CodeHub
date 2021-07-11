# NOIP 2016S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2822)
- [Vijos](https://www.vijos.org/p/2006)

## Solution

When I saw the combination, I got some idea of the Pascal Triangle, which I can get $\tbinom{m}{n}$ in $\operatorname{O}(n m)$. Then we can preprocess the whole Pascal Triangle, and when I need them, I can get it in $\operatorname{O}(1)$. So the whole time complexity would be $\operatorname{O}(n m t)$. But it still seems too slow. Then I found that I can make a prefix sum to keep the numbers of fit combinations that I can search a line in $\operatorname{O}(1)$. So the total time complexity would be $\operatorname{O}(n(m+t))$ this time.

## Code

- [Solution](NOIP.2016S4.0.cpp)

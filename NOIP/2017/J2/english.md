# NOIP 2017J2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P3955)

## Solution

Well, it has been a long time since last practice. Now I am the senior of the school. So in the next year (until June, 2019), I'll be busy in my school work. I'm afraid that I don't have much spare time to solve problems.

This problem is very simple. The <abbr title="Brute Force">BF</abbr> could solve it. But you will find it faster if you sort the book array. This means you can abort the rest when you find the first match. And a better optimization is to use a trie. This can reduce the time complexity from $\operatorname{O}(n q)$ to $\operatorname{O}(n+q)$. If you build the trie of the book indexes, you can spend $\operatorname{O}(1)$ to find the right book (But remember to reverse the order of the indexes).

## Code

- [Solution](NOIP.2017J2.0.cpp)

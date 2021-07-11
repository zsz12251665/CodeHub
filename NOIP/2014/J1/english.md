# NOIP 2014J1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2141)
- [Vijos](https://www.vijos.org/p/1911)

## Solution

Tomorrow is Day 1 of NOIP 2017, so let's solve some easy problems to raise our spirits. \(&#8807;&#9661;&#8806;*)o

The problem can be solved by enumerating the sum and the pair of numbers. However, the problem requires us to count the sums, not the pairs. So when we find a pair that their sum equals the number we're enumerating, we need to break two loops. So I compress the two loops into one that we will need just one break.

## Code

- [Solution](NOIP.2014J1.0.cpp)

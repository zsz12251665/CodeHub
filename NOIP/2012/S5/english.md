# NOIP 2012S5

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1083)
- [Vijos](https://www.vijos.org/p/1782)

## Solution

This problem could be solved with a segment tree which records the minimum value in the range. You subtract $d_j$ from each value in a range, which is also a function of segment tree. When you find the minimum value of the whole array is below 0, it means that this request could not be satisfied.

P. S. The C++ got 1 or 2 <abbr title="Time Limit Exceeded">TLE</abbr> while Pascal got <abbr title="Accepted">AC</abbr> for all test? That's really embarrassing!

## Code

- [Solution](NOIP.2012S5.0.cpp)

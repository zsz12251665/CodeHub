# CF 1304D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1304D)
- [Luogu](https://www.luogu.com.cn/problem/CF1304D)
- [Codeforces](https://codeforces.com/problemset/problem/1304/D)

## Solution

Eh... My intuition told me that the shortest <abbr title="longest increasing subsequence">LIS</abbr> can be found on the lexicographically largest sequence and the longest one can be found on the lexicographically smallest sequence but I have no idea how to prove it. And it is correct (although neither my solution or the tutorial has the proof)!

The lexicographically largest sequence is a sequence from $n$ to $1$ but reverse the part which <data value="v{a}b{v{i}}o{&lt;}v{a}b{v{i}o{+}c{1}}"></data> consecutively and vice versa to the lexicographically smallest sequence.

## Code

- [Solution](CF.1304D.0.cpp)

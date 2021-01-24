# BZOJ 4300

## Description

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-4300)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/4300)

## Solution

To solve this problem, a <abbr title="dynamic programming">dp</abbr> algorithm will make sense.

Assume $f_i$ is the length of the longest subsequence of which the $i$-th binary digit of the last integer is not 0. For each $a_i$, we can find a longest subsequence that ends with it and update the dp array $f$ with this subsequence. The answer is the maximum of $f_i$.

## Code

- [Solution](BZOJ.4300.0.cpp)

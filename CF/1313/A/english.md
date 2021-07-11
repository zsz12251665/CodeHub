# CF 1313A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1313A)
- [Luogu](https://www.luogu.com.cn/problem/CF1313A)
- [Codeforces](https://codeforces.com/problemset/problem/1313/A)

## Solution

This problem is quite easy. You try every combination and count the numbers. The only problem is that in some cases like "2 4 2", you might be unable to achieve the maximum number due to the order you try. So I highly recommend to sort the numbers before you try (just like my codes) or deal with them separately. If you are not confident, you can try all <data value="c{2}p{c{7}}"></data> possible combinations of combinations to get the correct answer.

## Code

- [Solution](CF.1313A.0.cpp)

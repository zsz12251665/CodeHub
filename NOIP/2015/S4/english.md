# NOIP 2015S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2678)
- [Vijos](https://www.vijos.org/p/1981)

## Solution

I spent a large amount of time thinking how to solve the problem with greedy method or <abbr title="dynamic programming">dp</abbr> until I knew that the correct solution is binary search since the answer is monotonic. Greedy method requires an $\operatorname{O}(n^2)$ time complexity and dp is completely wrong.

The binary search is acceptable because it provides an $\operatorname{O}(n\log l)$ time complexity. First of all, we set the range as $[0,l]$. Then we try if making the minimum distance between two rocks as the middle value of the range is acceptable. Then we can reduce the searching range as half of the last range. Continue to take these steps until the range is empty. So we will only try $\log l$ times. For each try, we can finish it by scanning the rocks once, which is $\operatorname{O}(n)$. So we solve the problem.

## Code

- [Solution](NOIP.2015S4.0.cpp)

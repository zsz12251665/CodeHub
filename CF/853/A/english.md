# CF 853A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-853A)
- [Luogu](https://www.luogu.com.cn/problem/CF853A)
- [Codeforces](https://codeforces.com/problemset/problem/853/A)

## Solution

We use the greedy algorithm to solve the problem. We pick up the plane which cost most while delaying and let it depart as soon as possible. Then the second one, the third one, until the last one. But remember that no flight is allowed to depart earlier than it was supposed to depart in the initial schedule. So remember to set a <data value="v{timeline}"></data> array to record the moments that there is a plane which is going to depart.

## Code

- [Solution](CF.853A.0.cpp)
